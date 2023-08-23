PRINTF is a Collaborative Project to be done in teams of 2 people (HARRY ONISOWURUN JIETY, Moses Chukwuma)

# Custom Formatting Functions

This code includes custom implementations of several formatting functions, such as `custom_itoa`, `custom_strcpy`, `custom_snprintf`, and `custom_printf`. These functions provide additional functionality and error handling compared to their standard library counterparts.

## `custom_itoa`

c
int custom_itoa(int value, char* buffer, size_t bufferSize);


This function converts an integer value to a null-terminated string representation and stores it in the provided buffer. The `bufferSize` parameter specifies the size of the buffer. The function returns the length of the generated string on success or -1 if the buffer size is insufficient.

## `custom_strcpy`

c
int custom_strcpy(char* dest, const char* src, size_t destSize);


This function copies the null-terminated source string `src` to the destination string `dest`. The `destSize` parameter specifies the size of the destination buffer. The function returns the number of characters copied on success or -1 if the destination buffer is too small.

## `custom_snprintf`

c
int custom_snprintf(char* buffer, size_t bufferSize, const char* format, ...);


This function formats and writes a null-terminated string to the provided buffer. It supports format specifiers `%d` for integers and `%s` for strings. The function returns the number of characters written on success or -1 if the buffer size is insufficient.

## `custom_printf`

c
int custom_printf(const char* format, ...);


This function provides functionality similar to the standard `printf` function. It accepts a format string and variable arguments, and prints the formatted output to the standard output. The function returns the number of characters printed on success or -1 if an error occurs.

## Example Usage

The `main` function in the code demonstrates an example usage of the `custom_printf` function. It prints a formatted message using the format string `"Hello, %s! You have %d messages."` and the corresponding arguments `"Austine"` and `3`. The total number of characters printed is then displayed.

c
int main() {
    // Test custom_printf function
    int count = custom_printf("Hello, %s! You have %d messages.", "Austine", 3);
    printf("\nTotal characters printed: %d\n", count);

    return 0;
}


In this example, the output would be:


Hello, Austine! You have 3 messages.
Total characters printed: 34


Note that the `custom_printf` function internally utilizes the other custom formatting functions (`custom_itoa` and `custom_snprintf`) to handle the formatting and conversion tasks.
