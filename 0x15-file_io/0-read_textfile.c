#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of file to read
 * @letters: number of letters to read and print
 *
 * Return: numbers of letters printed. if it fails return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t file_rd, file_wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_rd = read(fd, buffer, letters);
	file_wr = write(STDOUT_FILENO, buffer, file_rd);

	close(fd);
	free(buffer);
	return (file_wr);
}
