#include "my_math.h"

//finds the nearest square
// num = 20 -> perfect 4, because 4 * 4 = 16
int find_perfect(int n) {

	int perfect = 1;

	while (n > perfect * perfect)
		perfect++;

	perfect = perfect * perfect - n < n - (perfect - 1) * (perfect - 1) ?
		perfect : perfect - 1;

	return perfect;
}

double average(double n1, double n2) {

	return (n1 + n2) / 2;
}

double my_sqrt(double n) {

	//calculating average until finding the square root
	int perfect = find_perfect(n);
	double square_root = average(n / perfect, perfect);
	int count = 0;

	while (count < C) {

		if (square_root * square_root == n)
			return square_root;

		square_root = average(n / square_root, square_root);
		count++;
	}

	return square_root;
}

double my_power(double n, int exponent) {

	double power = 1;
	while (exponent > 0) {

		power *= n;
		exponent--;
	}

	return power;
}