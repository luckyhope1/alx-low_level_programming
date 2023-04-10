#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */

int main(int argc, char **argv)
{
	int fd;
	unsigned char buffer[16];
	unsigned char class, data, version, osabi, abiversion, type;
	unsigned long entry;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("open");
		exit(98);
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		perror("read");
		exit(98);
	}
	if (bytes_read != sizeof(buffer) || buffer[0] != 0x7f
			|| buffer[1] != 'E' || buffer[2] != 'L'
			|| buffer[3] != 'F')
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		exit(98);
	}

	class = buffer[4];
	data = buffer[5];
	version = buffer[6];
	osabi = buffer[7];
	abiversion = buffer[8];
	type = buffer[16];
	entry = *(unsigned long *)(buffer + 24);

	printf("Magic:   7f 45 4c 46\n");
	printf("Class:   %s\n", class == 1 ? "ELF32"
			: (class == 2 ? "ELF64" : "Unknown"));
	printf("Data:    %s\n", data == 1 ? "2's complement, little endian"
			: (data == 2 ? "2's complement, big endian"
				: "Unknown"));
	printf("Version: %d\n", version);
	printf("OS/ABI:  %s\n", osabi == 0 ? "UNIX System V ABI"
			: (osabi == 3 ? "Linux ABI" : "Unknown"));
	printf("ABI Version: %d\n", abiversion);
	printf("Type: %s\n", type == 1 ? "Relocatable"
			: (type == 2 ? "Executable"
				: (type == 3 ? "Shared object"
					: (type == 4 ? "Core file" : "Unknown"
						))));
	printf("Entry point address: %lx\n", entry);

	close(fd);
	exit(0);
}
