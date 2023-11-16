#include "main.h"
/**
 * _putchar - Prints a single character.
 * @c: The character to be printed
 *
 * Return: Always 0 (Success)
 */
void _putchar(char c);

/**
 * _puts_recursion - Prints a string followed by a newline.
 * @s: The input string
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
