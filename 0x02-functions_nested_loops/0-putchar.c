#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes _putchar to stdout
 *
 * Return: Always 0(Success)
 */
int _putchar(void)
{
	char *str = "_putchar\n";
	ssize_t len = 9;

	return (write(1, str, len));
}
