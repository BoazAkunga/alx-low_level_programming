#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Filename
 * @text_content: Content written in the file.
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fc;
	int nletter;
	int rwd;

	if (!filename)
		return (-1);

	fc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletter = 0; text_content[nletter]; nletter++)
		;

	rwd = write(fc, text_content, nletter);

	if (rwd == -1)
		return (-1);

	close(fc);

	return (1);
}
