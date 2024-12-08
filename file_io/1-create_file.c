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
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
