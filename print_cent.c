#include "main.h"

/**
 * print_cent - print single character to the standard output
 * @args: list of argument parameters
 * Return: 0 on success
 */

int print_cent(va_list args __attribute__((unused))) {
    int count = write(1, "%", 1);
    return count;
}
