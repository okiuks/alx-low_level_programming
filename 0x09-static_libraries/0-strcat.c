#include "main.h"
#include <string.h>

 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
