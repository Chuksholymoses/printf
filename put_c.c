#include "main.h"

/**
 * put_c - Print a character
 * @c: character c
 * Return: always 0 on success
 */

int _putchar(char c) {
    return write(1, &c, 1);
}
