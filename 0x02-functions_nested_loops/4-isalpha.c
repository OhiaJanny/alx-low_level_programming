#include "main"

/**
 * _isalpha - check for alphabetic character
 * @c: the character to be check
 * Return: 1 if c is lowercase, o otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
