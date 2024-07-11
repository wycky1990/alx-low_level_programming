#include "main.h"

/**
 * _strlen_recursion - returns strings leghth
 * @s: string to be checked
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _check_palindrome - checks palindrome
 * @s: string to be checked
 * @start: starting index
 * @end: end index
 * Return: 1 if palindrome, 0 otherwise
 */

int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
	{
		return (1);
	}
	return (_check_palindrome(s, 0, len - 1));
}
