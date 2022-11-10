#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints to the posix standard output.
 * @filename: pointer
 * @letters: letters to be read.
 *
 * Return: NULL if fail. Value of letters otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDesc;
	char *Buff;
	ssize_t readResult, wr;

	if (filename == NULL)
		return (0);


	fileDesc = open(filename, O_RDONLY);
	if (fileDesc == -1)
		return (0);


	Buff = malloc(letters);
	if (Buff == NULL)
	{
		close (fileDesc);
		return (0);
	}
	readResult = read(fileDesc, Buff, Letters);
	close (fileDesc);

	wr = write
	write (STDOUT_FILENO, Buff, readResult)
	free(Buff);
	if (wr < 0)
		return (0);
	return (wr);
