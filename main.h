#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int (*check_spec(const char* format))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_cent(va_list args);
int print_cent(va_list args __attribute__((unused)));
/**
 * struct func - structure to print a specifier
 * @t: compare character
 * @f: printing functions
 */

typedef struct {
    const char *t;
    int (*f)(va_list);
} func_t;


#endif
