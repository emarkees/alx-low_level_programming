#include <stdio.h>
#include "main.h"
/**
 * _puts - prints string followed by newline
 * @str: pointer to string
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
