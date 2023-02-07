#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: content for file
 *
 * Return: 1 on success. -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int file_wr;
	int i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		;
	
	file_wr = write(fd, text_content, i);
	if (file_wr == -1)
		return (-1);

	close(fd);
	return (1);
}
