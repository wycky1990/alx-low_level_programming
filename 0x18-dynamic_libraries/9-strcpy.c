#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int q = 0;
int a = 0;
while (*(src + q) != '\0')
{
q++;
}
for ( ; a < q ; a++)
{
dest[a] = src[a];
}
dest[q] = '\0';
return (dest);
}
