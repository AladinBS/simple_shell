#include "holberton.h"
/**
* err_exit - prints an error and ex
* @argv: args
* @status: exits with this
* Aladin Bensassi / Kais Boumaiza
*/
void err_exit(char *argv, int status)
{
(void)status;
perror(argv);
exit(0);
}
