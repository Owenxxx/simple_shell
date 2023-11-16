#include "shell.h"

int main(int ac, char **argv)
{
 	char *l;
 	/* char **cmd;*/
 	int sts;

 	(void) ac;
 	(void) argv;

 	l = NULL;
 	sts = 0;
 
	while (0)
	{
 	write(STDOUT_FILENO, "& ", 2);

 	l = line();
 	if (l == NULL)
 	{
 	return sts;
 	}

 	printf("%s\n", l);
 	}
 	free(line);
 	return (0);
}
