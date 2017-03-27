#include <stdio.h>

void saySomething(int x);
void saySomethingElse(int y);

int main() {
	int age = 0;

	printf("Please enter your age: ");
	scanf("%d", &age);

	saySomething(age);
	saySomethingElse(age);
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

void saySomethingElse(int age) {
	switch (age) {
		case 0:
		case 1:
			printf("You're too young!\n");
			break;
		case 2:
			printf("Goo-Goo.\n");
			break;
		case 3:
			printf("You're the man!\n");
			break;
		case 4:
			printf("You're too old.\n");
			break;
		default:
			printf("I don't know that age...\n");
	}
}
