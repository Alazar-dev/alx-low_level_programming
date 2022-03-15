#include "main.h"
/**
 *  * print_sign - Check Main
 *   * @n: An input number
 *    * Description: Tohis function prints the sign of the number
 *     * Return: 1 if number is positive, o if number is 0, or
 *      * -1 if number is negative
 *       **/
int print_sign(int n)
{
int value;
if (n > 0)
{
value = 1;
_putchar('+');
}
else
{
value = -1;
_putchar('-');
}
return (value);
}
