#include "main.h"

/**
 * read_textfile - Reads a text file and prints the letters
 * @filename: Filename
 * @letters: Nos of letters printed
 * Return: Nos of letters printed on success else returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fc;
	ssize_t nrc, nwd;
	char *buf;

	if (!filename)
		return (0);

	fc = open(filename, O_RDONLY);

	if (fc == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrc = read(fc, buf, letters);
	nwd = write(STDOUT_FILENO, buf, nrc);

	close(fc);

	free(buf);

	return (nwd);
}
