#include "main.h"

/**
 * print_alphabet - print all alphabets in lower-case
 *
 * return: 0 (successful)
 */

void print_alphabet(void)
{
	for(char i = 'a'; i <= 'z'; i++)
	{
		__putchar(i);
	}
	__putchar('\n');
}

