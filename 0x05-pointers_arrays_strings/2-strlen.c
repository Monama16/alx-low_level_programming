#include <stdio.h>
#include <string.h>
/**
 *  _strlen - return the length of a string
 *  @s: char to check
 *  Return: 0
 */

int _strlen(char *s)
{
    int i = 0;

    for (; *s++;)
	    i++;
    return(i);
}

