#include <stdio.h>
#include <stdlib.h>

int* createArray(int);
void printArray(int*, int);
void printAddress(int*, int);
int sumArr(int*, int);

void main() {

	int size;
	printf("Enter the size of the array: ");
	scanf_s("%d", &size);

	int* arr = createArray(size);
	printArray(arr, size);
	printAddress(arr, size);
	printf("arr: %d\n", *arr);
	int sum = sumArr(arr, size);
	printf("sum: %d\n", sum);
}

int* createArray(int n) {

	//Creates array
	int* p = (int*)malloc(n * sizeof(int));

	if (p == NULL)
		return NULL;

	for (int i = 0; i < n; i++) {

		printf("Enter element %d: ", (i + 1));
		scanf_s("%d", &p[i]);
	}

	return p;

}

void printArray(int* arr, int n) {

	printf("\n");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void printAddress(int* arr, int n) {

	for (int i = 0; i < n; i++) {

		printf("Address of element %d is %p\n", i + 1, arr);
		arr++;
	}
}

int sumArr(int* arr, int n) {

	int* p = arr;
	int sum = 0;
	for (; p < (arr + n); p++)
		sum += *p;

	return sum;
}