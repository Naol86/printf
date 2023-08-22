#include "main.h"
/**
 * print_binary - print binary number
 * @num: int number
 * @count: length of binary
 * Return: unsigned int
 */
unsigned int print_binary(unsigned int num, unsigned int count)
{
unsigned int temp;
if (num < 2)
{
if (num == 1)
{
_putchar('1');
return (count + 1);
}
else if (num == 0)
{
_putchar('0');
return (count + 1);
}
}
else
{
temp = print_binary(num / 2, count + 1);
_putchar('0' + (num % 2));
}
return (temp);
}
