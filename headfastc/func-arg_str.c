#include <stdio.h>

void print_msg(char msg[])
{
	printf ("Message reads: %s\n", msg);
	printf ("msg occupies %lu bytes in memory\n", sizeof (msg));
}

int main()
{
	char quote[] = "Cookies make you fat";
	print_msg(quote);
	printf ("The quote string is stored at %p\n", quote);
	
	return (0);
}
