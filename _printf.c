#include "main.h"

/**
 * _printf - printf function by my self
 * @format: char type
 * Return: int
 */

int _printf(const char *format, ...)
{
unsigned int i, j, count = 0;
char *str;
va_list list;
va_start(list, format);
if (format == NULL)
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
count += _putchar(va_arg(list, int));
break;
case 's':
str = va_arg(list, char *);
for (j = 0; str[j] != '\0'; j++)
count += _putchar(str[j]);
break;
case '%':
count += _putchar('%');
break;
case 'd':
case 'i':
count += print_int(va_arg(list, int));
break;
case 'b':
count += print_binary(va_arg(list, int), 0);
break;
default:
break;
}
}
else
count += _putchar(format[i]);
}
va_end(list);
return (count);
}
