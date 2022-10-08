#include <stdio.h>
void main()
{
	int drinks[] = {4,2,3};

	/**
	 * these two lines of codes work the same because an array variable
	 * can be  used as a pointer to the first element.
	 * */

	printf ("1st order: %i drinks\n", drinks[0]);
	printf ("1st order: %i drinks\n", *drinks);
}
