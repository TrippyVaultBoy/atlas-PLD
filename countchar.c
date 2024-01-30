#include "main.h"

/**
 *
 *
 *
 */

int countchar(char *word)
{
	int count = 0;

	for (word; *word != '\0'; word++)
	{
		count++;
	}
	return (count);
}
