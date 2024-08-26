#include <stdio.h>
#include <stdlib.h>
#define N 5

int* createMatrix(int, int, int);
void printMatrix(int*, int, int);
void getPrimaryDiagonal(int*, int);
void getSecondaryDiagonal(int*, int);
void printAddresses(int*, int, int);

void main() {

	int* matrix = createMatrix(100, N, N);
	printMatrix(matrix, N, N);
	getPrimaryDiagonal(matrix, N);
	printAddresses(matrix, N, N);
	getSecondaryDiagonal(matrix, N);
}

int* createMatrix(int num, int r, int c) {

	//Crates a matrix like a normal array
	int* matrix = (int*)malloc(r * c * sizeof(int));

	if (matrix == NULL)
		return NULL;

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++, num++)
			*(matrix + i * c + j) = num;
	
	return matrix;
}

void printMatrix(int* matrix, int r, int c) {

	printf("\n");
	for (int i = 0; i < r; i++) {
		
		for (int k = 0; k < c; k++)
			printf("%d ", *(matrix + i * c + k));

		printf("\n");
	}
}

void printAddresses(int* matrix, int r, int c) {

	printf("\nAddresses\n");
	for (int i = 0; i < r; i++) {

		for (int k = 0; k < c; k++)
			printf("%p  ", (matrix + i * c + k));

		printf("\n");
	}

}

void getPrimaryDiagonal(int* matrix, int r) {

	printf("\nPrimary digaonal\n");
	for (int* p = matrix; p < (matrix + r * r); p += r + 1)
		printf("%d ", *p);

	printf("\n");
}

void getSecondaryDiagonal(int* matrix, int r) {

	printf("\nSecondary diagonal\n");
	for (int* p = matrix + r - 1; p < (matrix + r * r - 1); p += r - 1)
		printf("%d ", *p);

	printf("\n");
}