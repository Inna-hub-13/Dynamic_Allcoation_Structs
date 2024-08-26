#include <stdio.h>

struct numbers{

	int num1;
	int num2;
	int num3;
};

void printInfo(struct numbers);

void main() {

	struct numbers number1 = {10, 10, 10};
	struct numbers number2 = {101, 10, 10};
	number1.num1 = 89;
	number1.num2 = 103;
	number1.num3 = 104;
	printInfo(number1);
	printInfo(number2);
}

void printInfo(struct numbers number) {

	printf("num1 = %d\n", number.num1);
	printf("num2 = %d\n", number.num2);
	printf("num3 = %d\n", number.num3);
	printf("\n");
}

