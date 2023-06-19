#include "main.h"
/**
 * _isalpha - checks alphabet character
 * @c : the character to check the alphabet
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 &&  c <= 122) || (c >= 65 && c <= 90));
}
