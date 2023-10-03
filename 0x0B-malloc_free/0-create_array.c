#include "main.h"
#include <stdlib.h>
/**
 * Description: creat array of size size and assign char c
 * create_array - create array of size size and assign char c*
 */

char *create_array(unsigned int size, char c)
{

char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;

return (str);
}
