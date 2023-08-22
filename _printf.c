#include "main.h"

/**
 * _printf - printf file
 * @format: char
 * Return: return the expected value
 */

int _printf(const char *format, ...)
{

unsigned int i, s_len;
unsigned int count = 0;

va_list list;

va_start(list, format);

for (i = 0; format[i] != '\0'; i++)
{

count += 1;
if (format[i] != '%')
_putchar(format[i]);

else if (format[i + 1] == 'c')
{
_putchar(va_arg(list, int));
i++;
}

else if (format[i + 1] == 's')
{
s_len = len(va_arg(list, char *));
count += (s_len - 1);
i++;
}

else if (format[i + 1] == '%')
{
_putchar('%');
i++;
}
}
va_end(list);

return (count);
}
