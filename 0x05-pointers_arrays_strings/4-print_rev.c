#include <stdio.h>
#include <string.h>
/**
 *  printing a string in reverse
 *  @s: rev
 *  Return: 0
 */


void print_rev(char *s) 
{
	int l = strlen(s);

	for (int i = l - 1; i >= 0; i--)
		{
			printf("%c", s[i]);
		}
    
	printf("\n");
}
