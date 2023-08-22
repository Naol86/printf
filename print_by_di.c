#include "main.h"


unsigned int print_int(long int num)
{
    unsigned int num_digits,temp,k,digit,count=0;
    num_digits = 0;
    if (num < 0)
    {
        count += _putchar('-');
        num = -num;
    }
    temp = num;
    do
    {
        num_digits++;
        temp /= 10;
    } while (temp != 0);
    for (k = 0; k < num_digits; k++)
    {
        digit = (num / power(num_digits - k - 1)) % 10;
        digit %= 10;
        count += _putchar('0' + digit);
    }
    return (count);
}
