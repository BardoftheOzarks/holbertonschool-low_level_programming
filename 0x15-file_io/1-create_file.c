#include "holberton.h"
/**
 * create_file - creates file
 * @filename: new file name
 * @text_content: new file content
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	while(text_content[size] != '\0')
		size++;
	write(fd, text_content, size);
	return (1);
}
