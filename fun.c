#include <stdio.h>

void saySomething(int x);

int main() {
	int age = 6;

	saySomething(age);
	printf("Thank you, you %d-year-old!\n", age);
}


void saySomething(int age) {
	age = (age + 2);
	if (age < 11) {
		printf("You are too young. Sorry, %d-year-old.\n", age);
	} else if (age > 13) {
		printf("Woah! You are too old. Sorry, %d-year-old.\n", age);
	} else 
		printf("You are %d: just right.\n", age);
}
