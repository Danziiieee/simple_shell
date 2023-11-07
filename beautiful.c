#include <stdio.h>
#include "shell.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* main - Entry point of the program
*
* This program creates a file and writes data to it
* and then reads and prints the test
*
*Return: 0 on success
*/
int main(void)
{
	int fd, bytes_read;
	char buffer[1024];

	char *data = "this is some data written to a file.\n";

	/* Create a file and/or open it */
	fd = open("beautiful.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return (1);
	}

	/* write data to the file */
	if (write(fd, data, strlen(data)) == -1)
	{
		perror("write");
		close(fd);
		return (1);
	}

	while ((bytes_read = read(fd, buffer, sizeof(buffer)) > 0))
	{
		write(STDOUT_FILENO, buffer, bytes_read);
	}

	close(fd);

	return (0);
}
