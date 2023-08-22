#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>



int len(char *c);
int _putchar(char c);
int _printf(const char *format, ...);
unsigned int power(unsigned int x);
unsigned int print_int(long int num);
unsigned int print_string(char *str);
unsigned int print_binary(unsigned int num, unsigned int count);
unsigned int print_octal(unsigned int num,unsigned int count);
unsigned int print_hex(char c,unsigned int num,unsigned int count);


#endif /* MAIN_H */
