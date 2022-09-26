/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * 	    pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memery area with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; ++, n--)
	{
		s[i] = b;
	}
		
	return (s);
}
