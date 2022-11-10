#include "main.h"

/**
 * _strlen - function that finds length of string.
 * @str: string
 *
 * Return: lenght
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * create_file - create file with permissions rw and write content
 * in if file exists. Keep and truncate.
 * @filename: name of file
 * @text_content: content in filename
 *
 * Return: 1 if success, -1 if fail.
 */

int create_file(const char *filename, char *text_content)
{
	int nname;
	int i;

	if (!filename)
		return (-1);

	nname = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (nname == -1)
		return (-1);

	if (!text_content)
	{
		close(nname);
		return (1);
	}

	i = write(nname, text_content, _strlen(text_content));
	if (i == -1 || i != _strlen(text_content))
	{
		close(nname);
		return (-1);
	}

	close(nname);
	return (1);
}

