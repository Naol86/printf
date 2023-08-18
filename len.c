#include "main.h"

int len(char* s)
{
    unsigned int count = 0;

    for(;s[count]!='\0';count++)
        _putchar(s[count]);
    
    return (count);
}