#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
* main - function that checks all files
* 
* Return: 0 if success
*/
int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		shell_interactive();
	}
	else
	{
		shell_no_interactive();
	}
	return (0);
}
