#include "holberton.h"
/**
* _atoi - convert string to integer
* @s: string converted
* Return: integer
* Aladin Bensassi / Kais Boumaiza
*/
int _atoi(char *s)
{
int i, x;
unxed int n;
n = i = 0;
x = 1;
while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
{
if (s[i] == '-')
x *= -1;
i++;
}
for (; s[i] != '\0' && s[i] >= '0' && s[i] <= '9'; i++)
{
n = n * 10 + (s[i] - '0');
}
n *= x;
return (n);
}
