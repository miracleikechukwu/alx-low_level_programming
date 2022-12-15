#include <stdio.h>

/**
 *main - print lower and uppercase letters a-zA-Z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*prints lower case a-z'*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*prints upper case A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
