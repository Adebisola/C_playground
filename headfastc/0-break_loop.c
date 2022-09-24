#include <stdio.h>

int main()
{
	while(feeling_hungry)
	{
		eat_cake();
		if (feeling_queasy)
		{
			/* break out of the while loop */
			break;
		}

		drink_cofee();
		if (not_lunch_yet)
		{
			/* go back to the loop */
			continue;
		}
		eat_cake();
	}

