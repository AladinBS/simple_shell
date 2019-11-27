#include "holberton.h"
/**
* _memcpy - copies area
* @dest: address of memory
* @src: constant byte
* @n: number of bytes to be copied
* Return: address of pointer to dest
* Aladin Bensassi / Kais Boumaiza
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
