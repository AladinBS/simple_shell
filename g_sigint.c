#include "holberton.h"
/**
* get_sigint - Handle the crtl + c call in prompt
* @sig: Signal handler
* Aladin Bensassi / Kais Boumaiza
*/
void get_sigint(int sig)
{
(void)sig;
write(STDOUT_FILENO, "\n^-^ ", 5);
}