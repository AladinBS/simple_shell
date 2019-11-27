#include "holberton.h"
/**
* rev_string - reverses a string.
* @s: input string.
* Return: no return.
* Aladin Bensassi
*/
void rev_string(char *s)
{
int x = 0, i, j;
char *str, temp;
while (x >= 0)
{
if (s[x] == '\0')
break;
x++;
}
str = s;
for (i = 0; i < (x - 1); i++)
{
for (j = i + 1; j > 0; j--)
{
temp = *(str + j);
*(str + j) = *(str + (j - 1));
*(str + (j - 1)) = temp;
}
}
}
