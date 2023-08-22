#include "main.h"
/**
 * power - find 10 power of a number
 * @x: int number
 * Return: unsigned int 
 */
unsigned int power(unsigned int x)
{
unsigned int po = 1, i;
for (i = 0; i < x; i++)
po *= 10;
return (po);
}
