#include <stdio.h>
/**
* main - Entry point of the program that prints alphabeth.
*
* Return: Always 0 (success)
*
* Description: a program that prints the alphabet
* in lowercase, and then in uppercase
*
*/
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	putchar('\n');

	return (0);
}
