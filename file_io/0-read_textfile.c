#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
*read_textfile -  reads a text file and prints it to the POSIX stdout.
*@filename: variable that contain the char
*@letters: the number of byte to read
*Return: the number of bytes readed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesWrite;
	ssize_t bytesRead;
	int fd;
	char *buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesRead == -1 || bytesWrite != bytesRead)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytesWrite);
}
