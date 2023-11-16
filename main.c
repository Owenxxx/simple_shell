#include "shell.h"
/**
* main - main function
* @ac: int
* @argv: char
*`
* Return: 0
*/
int main(int ac, char **argv)
{
	char *l;
	/* char **cmd;*/
	int sts;

	(void) ac;
	(void) argv;

	l = NULL;
	sts = 0;

	while (1)
	{
	write(1, "#cisfun$ ", 9);

	l = line();
	if (l == NULL)
	{
	return (sts);
	}

	free(l);
	}
	return (0);
}
