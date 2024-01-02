#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the buffer to copy to
 * @src: the string to copy from
 * Return: pointer of the new dest
 */

char *_strcpy(char *dest, const char *src)
{
char *newDest;
if (src == NULL || dest == NULL)
{
return NULL;
}

*newDest = dest;

while ((*dest++ = *src++) != '\0');

return newDest;
}
