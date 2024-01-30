#include "main.h"

/**
 *
 *
 *
 */

int countchar(char *word)
{
	int count = 0;

	while (*word != '\0')
	{
		count++;
	}
	return (count);
}
