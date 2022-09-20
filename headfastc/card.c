/**
* Program to evaluate face values.
* Released under the Vegas Public License.
* (c)2014 The College Blackjack Team.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];

	/* outputs to the terminaal */
	puts ("Enter the card_name: ");
	
	/* enter two characters for the card_name */
	scanf ("%2s", card_name);

	int val = 0;

	/** card_name[0] is the first character
	 * a user types, so in 10, 1 is the first charcter.
	 */

	if (card_name[0] == 'K')
	{
		val = 10;
	} else if (card_name[0] == 'Q')
	{
	val = 11;
	} else if (card_name[0] == 'A')
	{
	val = 11;
	} else if ( card_name[0] == 'J')
	{
	val = 10;
	} else {
		
		/* atoi converts text to number */
		val = atoi(card_name);
	}
	printf("The card value is %i\n", val);

	return (0);
}

