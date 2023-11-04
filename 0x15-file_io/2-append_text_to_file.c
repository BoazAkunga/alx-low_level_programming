#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Filename
 * @text_content: Added content
 * Return: 1 if the file exists else -1 if the file does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fc;
	int nletter;
	int rwd;

	if (!filename)
		return (-1);

	fc = open(filename, O_WRONLY | O_APPEND);

	if (fc == -1)
		return (-1);

	if (text_content)
	{
		for (nletter = 0; text_content[nletter]; nletter++)
			;

		rwd = write(fc, text_content, nletter);

		if (rwd == -1)
			return (-1);
	}

	close(fc);

	return (1);
}
