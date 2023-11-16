#include "shell.h"
/**
 * line - function to get new line
 * Return: line
 */
char *line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	nread = getline(&line, &len, stdin);
	if (nread == -1)
	{
	free(line);
	return (NULL);
	}
	free(line);

	return (line);
}
