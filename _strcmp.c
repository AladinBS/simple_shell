#include "holberton.h"
/**
* _strcmp - compares two strings
* @s1: string 1 to be compared 2
* @s2: string 2 to be compared 1
* Return: integer < 0 if string 1 first
* less than string 2; integer > 0 if first unmatched
* Aladin Bensassi / Kais Boumaiza
*/
int _strcmp(const char *s1, const char *s2)
{
int x;
x = 0;
while (s1[x] == s2[x])
x += 1;
if (s1[x] == '\0')
return (1);
else
return (-1);
}
