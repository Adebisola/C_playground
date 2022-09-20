#include <stdio.h>

/* Assumes name shorter than 20 characters */

int main()
{
	/* variable declaration */
	char ex[20];
	puts ("Enter boyfriend's name: ");
	/**
	 * store everything the user types
	 * in the ex array.
	 */
	scanf("%19s", ex);
	/**
	 * will insert the string of character 'ex' in the
	 * place of %s.
	 */
	printf ("Dear %s. \n\n\tYou're history. \n", ex);
}
