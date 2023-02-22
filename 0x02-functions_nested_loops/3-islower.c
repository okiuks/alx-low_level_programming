#include "main.h"

/**
 * _islower - cheks if a character is lowercase
 * @c: the character
 * Return: 1 if the character is lowecase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
