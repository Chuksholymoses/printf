#include "main.h"

/**
 * print_char - print single character to the standard output
 * @args: list of argument parameters
 * Return: 0 on success
 */

int print_str(va_list args) {
    char *str = va_arg(args, char *);
    int count = write(1, str, strlen(str));
    return count;
}
