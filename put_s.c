#include "main.h"

/**
 * put_s - prints string
 *
 * @c: string
 * Return: number of bytes or chars
 */

int put_s(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			put_chary(c[count]);
		}
	}
	return (count);
}
