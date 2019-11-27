#include "holberton.h"
/**
* error_env - error message for env in get_env.
* @datash: data relevant (counter, arguments)
* Return: error message.
* Aladin Bensassi / Kais Boumaiza
*/
char *error_env(data_shell *datash)
{
int x;
char *error;
char *ver_str;
char *msg;
ver_str = aux_itoa(datash->counter);
msg = ": Unable to add/remove from environment\n";
x = _strlen(datash->av[0]) + _strlen(ver_str);
x += _strlen(datash->args[0]) + _strlen(msg) + 4;
error = malloc(sizeof(char) * (x + 1));
if (error == 0)
{
free(error);
free(ver_str);
return (NULL);
}
_strcpy(error, datash->av[0]);
_strcat(error, ": ");
_strcat(error, ver_str);
_strcat(error, ": ");
_strcat(error, datash->args[0]);
_strcat(error, msg);
_strcat(error, "\0");
free(ver_str);
return (error);
}
/**
* error_path_126 - error message for path and failure denied permission.
* @datash: data relevant (counter, arguments).
* Return: The error string.
*/
char *error_path_126(data_shell *datash)
{
int x;
char *ver_str;
char *error;
ver_str = aux_itoa(datash->counter);
x = _strlen(datash->av[0]) + _strlen(ver_str);
x += _strlen(datash->args[0]) + 24;
error = malloc(sizeof(char) * (x + 1));
if (error == 0)
{
free(error);
free(ver_str);
return (NULL);
}
_strcpy(error, datash->av[0]);
_strcat(error, ": ");
_strcat(error, ver_str);
_strcat(error, ": ");
_strcat(error, datash->args[0]);
_strcat(error, ": Permission denied\n");
_strcat(error, "\0");
free(ver_str);
return (error);
}