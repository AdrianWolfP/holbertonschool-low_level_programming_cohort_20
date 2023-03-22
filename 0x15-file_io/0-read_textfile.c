#include "main.h"
/**
 * read_textfile - reads text file
 * @fn: a pointer to name of file
 * @l: number of letters that should be read and printed
 * Return: 0, to number of bytes that are read and printed
 */

ssize_t read_textfile(const char *fn, size_t l)
{
	ssize_t o, r, w;
	char *buffer;

	if (fn == NULL)
		return (0);

	buffer = malloc(sizeof(char) * 1);
	if (buffer == NULL)
		return (0);

	o = open(fn, O_RDONLY);
	r = read(o, buffer, 1);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
