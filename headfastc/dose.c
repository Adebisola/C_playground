#include <stdio.h>

int main()
{
	int doses[] = {1, 2, 1000};
	/* 3[doses] == doses[3] == *(doses + 3) == *(3 + doses) */

	printf("Issue doses %i\n", 3[doses]);
}
