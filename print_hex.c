#include "main.h"
/**
 * print_hex - print hex number
 * @c: char small or capital
 * @num: int number
 * @count: int count digits
 * Return: unsigned int
 */
unsigned int print_hex(char c, unsigned int num, unsigned int count)
{
unsigned int temp, temp2;
if (num < 16)
{
_putchar('0' + num);
return (count + 1);
}
else
{
temp = print_hex(c, num / 16, count + 1);
temp2 = num % 16;
if (temp2 < 10)
_putchar('0' + temp2);
else
{
if (c == 'x')
_putchar('a' + temp2 - 10);
else
_putchar('A' + temp2 - 10);
}
}
return (temp);
}
