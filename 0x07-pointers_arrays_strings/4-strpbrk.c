#include <string.h>
#include "main.h"
/**
 *  *_strpbrk - fills memory with a constant byte
 *   *
 *    * @s:vvv
 *     * @accept:vvv
 *       *
 *        * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int t, i;

	for (i = 0 ; i < strlen(s) ; i++)
	{
		for (t = 0 ; t < strlen(accept) ; t++)
		{
			if (s[i] == accept[t])
				return (s + i);
		}
	}
	return ('\0');
}
