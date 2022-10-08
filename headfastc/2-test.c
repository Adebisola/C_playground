#include <stdio.h>
#include <stdlib.h>

/**
 * skip - skip the first six characters of the input string.
 * @msg: string to be inputed.
 * Return: 0;
 */

void skip(char *msg)
{
	puts(msg + 6);
}

int main()
{

char *msg_from_amy = "Don't call me";

skip(msg_from_amy);

return (0);

}
