#include "main.h"
/**
  *print_last_digit - Check main.h
  *@r: An integer input
  *Description - Print the last digit of a number
  *Return: r
*/

int print_last_digit(int r)
{
int n;
if (r < 0)
{
n = -1 * (r % 10);
}
else
{
n = r % 10;
}
_putchar(n + '0');
return (n);
}
