#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
*append_text_to_file - appends text at the end of a file.
*@filename: the file name
*@text_content: the text content to append in the filename
*Return: 1 on succes, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
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

	file = open(filename, O_APPEND | O_RDWR);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
