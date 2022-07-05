#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 *
 * Description: a created putchar
 *
 * Return: returns 1 on success and -1 on failure
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
