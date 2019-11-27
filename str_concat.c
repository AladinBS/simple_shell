#include "holberton.h"
/**
* str_concat - concatenates two strings
* @s1: string1
* @s2: string 2 to appended to string1
* Return: pointer to the concatenated string
* Aladin Bensassi / Kais Boumaiza
*/
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int x, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x = 0; s1[x] != '\0'; x++)
;
for (j = 0; s2[j] != '\0'; j++)
;
concat_str = malloc((sizeof(char) * x) + (sizeof(char) * j) + 1);
if (concat_str == NULL)
exit(0);
for (x = 0; s1[x] != '\0'; x++)
concat_str[x] = s1[x];
for (j = 0; s2[j] != '\0'; j++)
concat_str[x + j] = s2[j];
concat_str[x + j] = '\0';
return (concat_str);
}
