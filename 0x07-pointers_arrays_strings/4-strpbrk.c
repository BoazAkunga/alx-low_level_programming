#include "main.h"
/**
 * *_strpbrk -  function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s:string to be searched
 * @accept: set of bytes to be searched for
 * Return: pointer to the byte in @s that matches one of the bytes in @accept
 * if no byte is found - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
