#include "main.h"

/**
 * strlen_recursion - length of a string
 * @s: string
 * Return: the length of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 * _palindrome - checks if the character is a palindrome
 * @s: string
 * @x: iterate number
 * @length: length of string
 * Return: 1 if palindrome 0 if not
 */

int _palindrome(char *s, int x, int length)
{
	if (*(s + x) != *(s + length - 1))
		return (0);
	if (x > length)
		return (1);
	return (_palindrome(s, x + 1, length - 1));
}

/**
 * is_palindrome - prints a palindrome
 * @s: string
 * Return: 1 if it a palindrome 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_palindrome(s, 0, strlen_recursion(s)));
}
