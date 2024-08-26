#include <stdio.h>
#include <stdbool.h>

bool containsNumber(int, int);
int numberOfDigits(int);
int power(int, int);

void main() {

	printf("Contains(1624, 62) ? %d\n", containsNumber(1624, 62));
	printf("Contains(195645, 3) ? %d\n", containsNumber(195645, 3));
	printf("Contains(187, 18) ? %d\n", containsNumber(187, 18));
	printf("Contains(12345678, 23) ? %d\n", containsNumber(12345678, 23));
	printf("Contains(12345678, 345) ? %d\n", containsNumber(12345678, 345));
}

int numberOfDigits(int num) {

	int count = 0;
	while (num > 0) {
		num /= 10;
		count++;
	}

	return count;
}

int power(int num, int exponent) {

	int res = 1;
	while (exponent > 0) {
		res *= num;
		exponent--;
	}

	return res;
}

bool containsNumber(int num, int numToContain) {

	//Number of didgits
	int digits = numberOfDigits(numToContain);
	int divide = power(10, digits);
	int numberToCompare;

	while (num >= numToContain) {

		numberToCompare = num % divide;
		if (numberToCompare == numToContain)
			return true;
		num /= 10;
	}

	return false;
}