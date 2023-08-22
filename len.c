#include "main.h"
/**
 * len - int type
 * @s: char
 *Return: return the value
*/

int len(char *s)
{
unsigned int count = 0;

for ( ; s[count] != '\0'; count++)
_putchar(s[count]);

return (count);
}
