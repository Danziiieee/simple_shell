#ifndef SHELL_H
#define SHELL_H

/*
* File name: shell.h
* Author1: Dania Sciarappa
* Author2: Obinyan Osemudiamen
*/

/*---LIBRARIES---*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <errno.h>
#include <fcntl.h>

/*---PROTOTYPES---*/

/* main.c */
void shell_interactive(void);
void shell_no_interactive(void);

#endif
