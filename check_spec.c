#include "main.h"

/**
 * check_spec - Check if character is a valid specifier
 * and assign appropriate functions for a printing
 * @format: specifier char*
 * Return: pointer to functions
 */

int (*check_spec(const char *format))(va_list) {
    int i;

    func_t my_array[] = {
        {"c", print_char},
        {"s", print_str},
        {"%", print_cent},
        {NULL, NULL}
    };

    for (i = 0; my_array[i].t != NULL; i++) {
        if (strcmp(my_array[i].t, format) == 0) {
            return my_array[i].f;
        }
    }

    return NULL;
}

