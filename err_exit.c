#include "holberton.h"
/**
* err_exit - prints out an error and exits
* @argv: arguments
* @status: exits with this status
* Aladin Bensassi / Kais Boumaiza
*/
void err_exit(char *argv, int status)
{
(void)status;
perror(argv);
exit(0);
}
