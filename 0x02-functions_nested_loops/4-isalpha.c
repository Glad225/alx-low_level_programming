#include "main.h"
/**
  *_isalpha - Check main.c
  *@c: An input character
  *Description: function returns 1 if the character is a
  *letter, lowercase or uppercase.
  * Return: 1 or 0 in otherwise.
*/
int _isalpha(int c)
{
char lower, upper;
int alpha = 0;
for (upper = 'A'; upper <= 'Z'; upper++)
{
for (lower = 'a'; lower <= 'z'; lower++)
{
if (c == upper || c == lower)
{
alpha = 1;
}
}
}
return (alpha);
}
