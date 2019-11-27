#include <stdarg.h>
#include "holberton.h"
/**
* free_cptrn - frees n amounts of strs
* @status: the status to ex
* @n: the number of strs to free
* Aladin Bensassi / Kais Boumaiza
*/
void free_cptrn(int status, const unsigned int n, ...)
{
unsigned int x;
va_list args;
char *ptr;
va_start(args, n);
for (x = 0; x < n; x += 1)
{
ptr = va_arg(args, char *);
free(ptr);
}
va_end(args);
if (status == 99)
return;
exit(0);
}
/**
* free_array - frees an array of char
* @array: a pointer to the array
* Aladin Bensassi / Kais Boumaiza
*/
void free_array(char **array)
{
int x;
if (!array)
exit(0);
x = 0;
while (array[x])
{
free(array[x]);
x += 1;
}
free(array);
}
