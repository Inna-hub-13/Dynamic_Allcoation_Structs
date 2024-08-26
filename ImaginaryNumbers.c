#include <stdio.h>

struct complexNumber{

	double real;
	double imaginary;
};

struct complexNumber sum(struct complexNumber, struct complexNumber);
struct complexNumber multiply(struct complexNumber, struct complexNumber);
void printComplex(struct complexNumber);

void main() {

	struct complexNumber n1 = { 1,1.2 };
	printComplex(n1);
	struct complexNumber n2 = { 2,3 };
	printComplex(n2);
	struct complexNumber n3 = sum(n1, n2);
	printComplex(n3);
	struct complexNumber n4 = multiply(n1, n2);
	printComplex(n4);

}

void printComplex(struct complexNumber n) {

	printf("(%lf, %lf)\n", n.real, n.imaginary);
}

struct complexNumber sum(struct complexNumber n1, struct complexNumber n2) {

	struct complexNumber number = { 0, 0 };
	number.real = n1.real + n2.real;
	number.imaginary = n1.imaginary + n2.imaginary;

	return number;
}

struct complexNumber multiply(struct complexNumber n1, struct complexNumber n2) {

	struct complexNumber number = { 0,0 };
	//Fomula found online
	number.real = n1.real * n2.real - n1.imaginary * n2.imaginary;
	number.imaginary = n1.real * n2.imaginary + n1.imaginary * n2.real;

	return number;
}