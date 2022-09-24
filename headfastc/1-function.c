#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	return (a + b);
}

int main()
{
	int balance = add(50000, 35000);

	printf ("The balance in my bank account is $%i\n", balance);
	return (0);
}
