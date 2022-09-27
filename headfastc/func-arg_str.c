#include <stdio.h>

void print_msg(char msg[])
{
	printf("Message reads: %s\n", msg);
}

int main()
{
	char quote[] = "Cookies make you fat";
	print_msg(quote);
	
	return (0);
}
