#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

/**
* main - Entry point of the program
*
* This function retrieves the process ID and the parent process ID
* and prints them
*
* Return 0 on success
*/
int main(void)
{

	pid_t pid, ppid;

	/* get the process ID */
	pid = getpid();
	ppid = getppid();

	printf("Process ID: %d\n", pid);
	printf("Parent process ID: %d\n", ppid);

	return (0);
}
