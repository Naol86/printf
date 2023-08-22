#include "main.h"
/**
 * print_octal - printing octal number
 * @num: int number
 * @count: count digits
 * Return: unsigned int
 */
unsigned int print_octal(unsigned int num, unsigned int count)
{
unsigned int temp;
if (num < 8)
{
_putchar('0' + num);
return (count + 1);
}
else
{
temp = print_octal(num / 8, count + 1);
_putchar('0' + (num % 8));
}
return (temp);
}
