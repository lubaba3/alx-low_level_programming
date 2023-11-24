#include "main.h"
/*
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @head: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *head)
{
int a;
unsigned int num;
num = 0;
if (!head)
return (0);
for (a = 0; head[a] != '\0'; a++)
{
if (head[a] != '0' && head[a] != '1')
return (0);
}
for (a = 0; head[a] != '\0'; a++)
{
num <<= 1;
num += 1;
}
return (num);
}

