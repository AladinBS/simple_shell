#include "holberton.h"
/**
* _getenv - get an env var
* @name: name of var
* @env: list of e.var
* Return: pointer to env var
* Aladin Bensassi / Kais Boumaiza
*/
char *_getenv(const char *name, char **env)
{
int x, j;
int res, len;
x = j = 0;
while (env[x] != NULL)
{
res = _strcmp(name, (const char *)env[x]);
if (res == 1)
{
len = _strlen(env[x]);
while (env[x][j] != '=')
j += 1;
len -= j;
return (env[x] + j + 1);
}
x++;
}
return (NULL);
}
