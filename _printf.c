#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 * @...: variadic functions
 */

int _printf(const char *format, ...) {
    int i = 0, count = 0, value = 0;
    int (*f)(va_list);
    va_list args;
    va_start(args, format);
    

    if (format == NULL) {
        return -1;
    }

    while (format[i]) {
        if (format[i] != '%') {
            value = write(1, &format[i], 1);
            count += value;
            i++;
        } else {
            f = check_spec(&format[i + 1]);
            if (f != NULL) {
                value = f(args);
                count += value;
                i = i + 2;
            } else if (format[i + 1] == '\0') {
                break; 
            } else {
                value = write(1, &format[i], 1);
                count += value;
                i++;
            }
        }
    }

    va_end(args);
    return count;
}

