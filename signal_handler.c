#include "holberton.h"
/**
* signal_handler - reprints prompt when signal ctrl+C is captured
* @signo: signal number
* Aladin Bensassi / Kais Boumaiza
*/
void signal_handler(int signo)
{
if (signo == SIGINT)
{
write(STDOUT_FILENO, "\n", 1);
write(STDOUT_FILENO, "Fuji$ ", 6);
}
}
