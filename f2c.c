#include <stdio.h>
/* print Fahrenheit-Celcius table
for fahr = -40, -20 ..., 300 */
main()
{
	int fahr, celsius;
	int lower, upper, step;

	/* initialize */
	lower = -40; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
		/*Okay, we're done. Now what?*/
	}
}
