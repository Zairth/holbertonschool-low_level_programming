#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * main - check the code
 *@argc: number of argument
 *@argv: the array of argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_from_to_file(argv[1], argv[2]);

	return (0);
}

/**
*cp_from_to_file - appends text at the end of a file.
*@from_filename: the file name
*@to_file: the destination file
*Return: void
*/
void cp_from_to_file(const char *from_filename, const char *to_file)
{
	int fd_from, fd_to, closed_from, closed_to, i, total_read = 0;
	char *buffer;
	char *big_buffer;
	ssize_t readed;
	ssize_t writed;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return;
	big_buffer = malloc(sizeof(char) * 2880);
	if (big_buffer == NULL)
		return;

	fd_from = open(from_filename, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_filename);
		exit(98);
	}
	while ((readed = read(fd_from, buffer, 1024)) > 0)
	{
		i = 0;
		while (i < readed)
		{
			big_buffer[total_read + i] = buffer[i];
			i++;
		}
		total_read += readed;
	}
	if (total_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_filename);
		exit(98);
	}

	fd_to = open(to_file, O_CREAT | O_WRONLY, 0664);
	if (fd_to == -1)
		exit(98);

	writed = write(fd_to, big_buffer, total_read);
	if (writed < 0 || writed != total_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
		exit(99);
	}

	closed_from = close(fd_from);
	if (closed_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", closed_from);
		exit(100);
	}
	closed_to = close(fd_to);
	if (closed_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", closed_to);
		exit(100);
	}

	free(buffer);
	free(big_buffer);
}
