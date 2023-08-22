#include "main.h"
/**
 * print_string - printing string
 * @str: array of char
 * Return: unsigned int
 */
unsigned int print_string(char *str)
{
unsigned int j, count = 0;
for (j = 0; str[j] != '\0'; j++)
count += _putchar(str[j]);
return (count);
}
