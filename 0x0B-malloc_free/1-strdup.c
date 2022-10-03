#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory which cointains a copy of the string
 * passsed.
 * *str: pointer to string being duplicated.
 *
 * Return: Null if str is Null.
 * pointer to duplicated string on success.
 * Null if memory was insufficient.
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check if str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/* check if malloc was successful */
	if (nstr == Null)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
