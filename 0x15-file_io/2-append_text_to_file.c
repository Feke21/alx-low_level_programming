#include "main.h"

/**
 * append_text_to_file - append text to end of file
 * @filename: name of file
 * @text_content: null terminated string
 *
 * Return: 1 if file exists. 1 if it fails and file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int file_wr;
	int i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		file_wr = write(fd, text_content, i);

		if (file_wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
