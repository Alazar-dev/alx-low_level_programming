#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Return 0 (successful)
 */

int main(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph == 'e' || alph == 'q')
{
continue;
}
else
{
putchar(alph);
}
}
putchar('\n');

return (0);
}

