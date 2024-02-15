#include "main.h"
/**
 * _strlen - Calculate the length of a string
 * @c: A pointer to the string whose length is to be calculated
 * Return: The length of the string (excluding the null terminator)
 */
int _strlen(char *c)
{
	int i = 0;
	
	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to add at the end of a file
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}
