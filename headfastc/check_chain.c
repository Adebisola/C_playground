#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;

	while (x < 5)
	{
		/** y = x- y; prints
		 * 00 11 21 32 42
		 */
		
		/** y = y + x; prints
		 * 00 11 23 36 410
		 */
		
		/** y = y + 2;
		if (y > 4)
			y = y - 1; prints
		* 02 14 25 36 47
		*/

		/** x = x + 1;
		 * y = y + x; prints 11 34 59
		 */

		if (y < 5) {
			x = x + 1;
			if (y < 3)
				x = x - 1;
		}
		y = y + 2;

		printf("%i%i ", x, y);
		x = x + 1;
	}
	printf("\n");

	return (0);
}
