#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Returns 0 (successful)
 */

int main(void)
{
int num;
char letter;

for (num = 0; num < 10; num++)
{
putchar(num + '0');
}

for (letter = 'a'; letter < 'g'; letter++)
{
putchar(letter);
}
putchar('\n');
}

