#include "holberton.h"
/**
* check_path - check if cmd is in the path dir
* @string: an array of strs
* @env: an array of env vars
* Return: pointer to list
* Aladin Bensassi / Kais Boumaiza
*/
void check_path(char **string, char **env)
{
char *str1, *str2, *path;
int i, x, y;
str1 = str_concat("/", string[0]);
path = _getenv("PATH", env);
if (path == NULL)
{
free(str1);
exit(0);
}
x = i = y = 0;
while (path[i])
{
if (path[i] == ':' || path[i + 1] == '\0')
{
if (path[i + 1] == '\0')
{
i += 1;
y = 1;
}
else
path[i] = '\0';
str2 = str_concat(path + x, str1);
if (access(str2, F_OK) == 0)
{
free(string[0]);
string[0] = str2;
free(str1);
return;
}
free(str2);
if (y)
break;
path[i] = ':';
x = i + 1;
}
i += 1;
}
free(str1);
}
