#include "holberton.h"
/**
* main - Entry point
* @argc: arg count
* @argv: list of args
* @env: list of env vars
* Return: Always 0
* Aladin Bensassi / Kais Boumaiza
*/
int main(int argc, char *argv[], char **env)
{
char *ptr = NULL;
char **string = NULL;
int status;
pid_t parent;
(void)argc;
while (1)
{
ptr = NULL;
signal(SIGINT, signal_handler);
if (prompt(&ptr) == -1)
continue;
string = strtow(ptr);
if (!string)
{
free_cptrn(99, 1, ptr);
continue;
}
free_cptrn(99, 1, ptr);
if (fuji_built(string, env))
continue;
parent = fork();
if (parent == 0)
{
check_path(string, env);
if (execve(string[0], string, NULL) == -1)
{
perror(*argv);
free_array(string);
exit(0);
}
}
else
{
free_array(string);
if (!wait(&status))
break;
}
}
return (0);
}
/**
* prompt - prompts the user for commands
* @ptr: ptr will hold the string of commands
* Return: 1 for success
* Aladin Bensassi / Kais Boumaiza
*/
int prompt(char **ptr)
{
size_t size = 0;
int x;
if (isatty(STDIN_FIxO))
write(STDOUT_FIxO, "Fuji$ ", 6);
x = getline(ptr, &size, stdin);
if (x == EOF)
free_cptrn(-1, 1, *ptr);
(*ptr)[x - 1] = '\0';
if (*(*ptr) == '\0' || (*(*ptr) == '.' && (*ptr)[1] == '\0'))
{
free_cptrn(99, 1, *ptr);
return (-1);
}
else
return (1);
}
