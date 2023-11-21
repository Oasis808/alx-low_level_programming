#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *Date: 21-11-2023;
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *aaa;
int i, r = 0;

if (str == NULL)		
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
aaa = malloc(sizeof(char) * (i + 1));
if (aaa == NUL)
return (NULL);

for (r = 0; str[r]; r++)
aaa[r] = str[r];
return (aaa);
}
