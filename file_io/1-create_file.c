#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
*create_file - creates a file.
*@filename: the file name
*@text_content: the text content to append in the filename
*Return: 1 on succes, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file, i = 0;
	ssize_t bytesWrited;

	while (text_content[i] != '\0')
		i++;

	if (i == 0)
		text_content = "";

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	bytesWrited = write(file, text_content, i);

	close(file);
	return (1);
}
