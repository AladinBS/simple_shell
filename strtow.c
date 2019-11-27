#include "holberton.h"
/**
* strtow - splits a string
* @str: a pointer to string
* Return: a pointer to array
* Aladin Bensassi / Kais Boumaiza
*/
char **strtow(char *str)
{
char **words;
int x;
x = word_x(str);
if (x <= 0)
return (NULL);
words = malloc(sizeof(char *) * (x + 1));
if (!words)
return (NULL);
get_word(words, str);
return (words);
}
/**
* cpy_str - clips a word from string
* @end: the end of word
* @s: the string to clip the word
* @word_box: the array to store the word
* Aladin Bensassi / Kais Boumaiza
*/
void cpy_str(int end, char *s, char **word_box)
{
int i;
(*word_box) = malloc(sizeof(char) * end + 1);
if (!(*word_box))
{
perror("Error: malloc\n");
free(word_box);
exit(0);
}
for (i = 0; i < end; i += 1)
(*word_box)[i] = s[i];
(*word_box)[i] = '\0';
}
/**
* word_count - counts the number of words in a string
* @str: a pointer to the string
* Return: the number of words in a string
* Aladin Bensassi / Kais Boumaiza
*/
int word_count(char *str)
{
unsigned int count, i;
int y;
if (str == NULL || *str == '\0')
return (-1);
y = i = count = 0;
if (str[1] == '\0' && *str == ' ')
return (-1);
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i + 1] == '\0')
{
if (str[i] != ' ')
y = 1;
if (y)
{
count += 1;
y = 0;
}
i += 1;
continue;
}
else
y = 1;
i += 1;
}
return (count);
}
/**
* get_word - get a word from a string to copy
* @words: an array of words
* @str: a pointer to the string
* Return: the array of words
* Aladin Bensassi / Kais Boumaiza
*/
void get_word(char **words, char *str)
{
int i, start, found, cnt;
cnt = i = start = found = 0;
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i + 1] == '\0')
{
if (str[i] != ' ')
{
i += 1;
found = 1;
}
if (found)
{
cpy_str(i - start, str + start, words + cnt);
if (!(words + cnt))
exit(0);
cnt += 1;
start = i + 1;
found = 0;
}
if (str[i] == '\0')
continue;
i += 1;
start += 1;
continue;
}
else
{
if (!found)
start = i;
found = 1;
}
i += 1;
}
words[cnt] = NULL;
}
