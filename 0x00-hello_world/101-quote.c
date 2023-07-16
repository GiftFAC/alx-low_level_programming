#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    ssize_t len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
    ssize_t bytes_written = write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);

    if (bytes_written != len)
        return 1;
    return 1;
}
