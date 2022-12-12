#include <stdio.h>
/**
 * *main- Entry Point
 * *Return: Always 0
*/
int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	};
	for (A = 'A'; A <= 'Z'; A++)
	{
	putchar(A);
	};
	putchar('\n');
	return (0);
}
