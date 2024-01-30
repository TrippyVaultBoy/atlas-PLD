#include "main.h"

/**
 *
 *
 *
 */

int main(void)
{
	char string[] = "Hello, World";
	char *word = string;
	int strlen;

	strlen = countchar(word);

	printf("%d", strlen);

	return (0);
}
