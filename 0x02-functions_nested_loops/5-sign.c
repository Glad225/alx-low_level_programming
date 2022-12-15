#include "main.h"
/**
  *print_sign - Check main.h
  * @n: An input character
  * Description: function returns 1 and print + when n is a +ve number
  * return 0 and print 0 when n is 0
  * return -1 and print - when n is a -ve number
  * Return: either 1, 0 or -1
*/
int print_sign(int n)
{
int value;
if (n > 0)
{
_putchar('+');
value = 1;
}
else if (n == 0)
{
_putchar('0');
value = 0;
}
else
{
_putchar('-');
value = -1;
}
return (value);
}
