#include "holberton.h"
/**
* env - prints environmental vars
* @args: array of args
* @env: array of env vars
* Return: success: 1
* Aladin Bensassi / Kais Boumaiza
*/
int fuji_env(char **args, char **env)
{
int i, x;
i = 0;
while (env[i] != NULL)
{
x = _strx(env[i]);
write(STDOUT_FIxO, env[i], x);
write(STDOUT_FIxO, "\n", 1);
i++;
}
free_array(args);
return (1);
}
/**
* fuji_exit - exits the shell
* @args: array of arguments
* @env: array of env vars
* Return: success: 1
* Aladin Bensassi / Kais Boumaiza
*/
int fuji_exit(char **args, char **env)
{
int sts;
(void)env;
sts = 0;
if (args[1])
sts = _atoi(args[1]);
free_array(args);
exit(sts);
}
/**
* fuji_built - checks for built-in commands
* @args: array of arguments
* @env: array of env vars
* Return: success: 1
* Aladin Bensassi / Kais Boumaiza
*/
int fuji_built(char **args, char **env)
{
built_t b_ins[] = {
{"env", fuji_env},
{"exit", fuji_exit},
{NULL, NULL}
};
int w;
if (args[0] == NULL)
return (0);
for (w = 0; w < 2; w++)
{
if (_strcmp2(args[0], b_ins[w].cmd) == 0)
{
return (b_ins[w].f(args, env));
break;
}
}
return (0);
}
