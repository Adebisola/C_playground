#include <stdio.h>

int larger(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

int main()
{
	int larger_num = larger(100, 2000);
	printf("%i is the larger num\n", larger_num);
	return (0);
}
