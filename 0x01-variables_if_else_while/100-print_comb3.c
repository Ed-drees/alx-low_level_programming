#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Numbers must be separated by, followed by a space
 *01 and 10 are considered the same combination of the two digits 0 and
 *Return: 0
 */

int main(void)
{
	int n1 = 48;
	int n2;
	int com = 44;

	while (n2 <= 57)
	{
		putchar(n1);
		putchar(n2);
		if (n1 != 56 || n2 != 57)
		{
			putchar(com);
			putchar(32);
		}
		n2 += 1;
	}
	putchar('\n');
	return (0);
}
