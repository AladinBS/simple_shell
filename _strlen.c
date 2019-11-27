#include "holberton.h"
/**
* _strlen - returns the length of a str
* @s: string
* Return: length of str
* Aladin Bensassi / Kais Boumaiza
*/
int _strlen(char *s)
{
int w;
for (w = 0; s[w] != '\0'; w++)
;
return (w);
}
