#include "holberton.h"
/**
* _strcmp2 - compares
* @s1: string 1 to be compared
* @s2: string 2 to be compared 
* Return: integer < 0 if string 1 first unmatched character ASCII value is
* less than string 2
* Aladin Bensassi / Kais Boumaiza
*/
int _strcmp2(const char *s1, const char *s2)
{
int i, x;
for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
x = s1[i] - s2[i];
if (x == 0)
continue;
else
break;
}
if (s1[i] == '\0' || s2[i] != '\0')
x = s1[i] - s2[i];
return (x);
}
