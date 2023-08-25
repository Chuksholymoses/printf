#include "main.h"

/**
 * print_char - print single character to the standard output
 * @args: list of argument parameters
 * Return: 0 on success
 */

int print_char(va_list args) {
    char c = (char)va_arg(args, int);
    int count = 0;

    count = write(1, &c, 1);

    return count;
}
