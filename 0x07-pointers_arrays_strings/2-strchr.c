#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to our string array input
 * @c: character to locate from input array
 * Return: first occurence of charatcer or null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
