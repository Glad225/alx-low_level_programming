nclude "main.h"
/**
  *_abs - Check main.h
  *@r: An input character
  *Description - Returns the absolute value of a number
  *Return: The absolute value of r
*/
int _abs(int r)
{
int number;
if (r > 0)
{
number = r;
}
else
{
number = r * (-1);
}
return (number);
}
