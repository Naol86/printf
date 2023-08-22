#include "main.h"

/**
 * _printf - printf function by my self
 * @format: char type
 * Return: int
 */

int _printf(const char *format, ...)
{
    unsigned int i, count = 0;
    va_list list;
    va_start(list, format);
    if (format == NULL)
        return (-1);
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
                count += _putchar(va_arg(list, int));
            else if (format[i] == 's')
                count += print_string(va_arg(list, char *));
            else if (format[i] == '%')
                count += _putchar('%');
            else if (format[i] == 'd' || format[i] == 'i' || format[i] == 'u')
                count += print_int(va_arg(list, int));
            else if (format[i] == 'b')
                count += print_binary(va_arg(list, int), 0);
            else if (format[i] == 'o')
                count += print_octal(va_arg(list, int), 0);
            else if (format[i]=='x' || format[i]=='X')
                count += print_hex(format[i],va_arg(list,int),0);
        }
        else
            count += _putchar(format[i]);
    }
    va_end(list);
    return (count);
}
