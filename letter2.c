#include <stdio.h>
/* copy input to output; 1st version */
main()
{
	int c;
	long count = 0;

	while ((c = getchar()) != EOF) {
		putchar(c);
		count++;
	}

	printf("There were %ld characters\n", count);

}
