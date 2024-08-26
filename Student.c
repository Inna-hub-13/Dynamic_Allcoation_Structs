#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct {

	char name[30];
	unsigned n;
	double grade;

} student;

//creates an array of students and fills it with information
student* create_students(int);
void print_students(student*, int);
student* find_max_grade(student*, int);
void print_one_student(student*);

void main() {

	student* students = create_students(N);
	print_students(students, N);
	student* maxStudent = find_max_grade(students, N);
	printf("\n\nStudent with highest grade\n");
	print_one_student(maxStudent);

}

student* create_students(int size) {

	student* students = (student*)malloc(size * sizeof(student));

	if (students == NULL)
		return NULL;

	student* tempStudent = students;

	//because gets() causes difficulties when scaning other data
	// fist we will enter the names
	for (;tempStudent < (students + size); tempStudent++) {

		printf("Enter name: ");
		gets(tempStudent->name);
	}


	for (tempStudent = students;tempStudent < (students + size); tempStudent++) {

		printf("Enter number: ");
		scanf_s("%u", &tempStudent->n);
		printf("Enter grade: ");
		scanf_s("%lf", &tempStudent->grade);
	}

	return students;
}

void print_students(student* students, int size) {

	//points to the fist ellemnt in the students array
	student* tempStudent = students;

	printf("\nName\t\tNumber\t\tGrade\n");
	for (; tempStudent < (students + size); tempStudent++)
		printf("%-16s%-17u%.2lf\n", tempStudent->name, tempStudent->n, tempStudent->grade);
	
}

student* find_max_grade(student* students, int size) {

	student* maxStudent = students;
	student* tempStudent = students + 1;

	for (; tempStudent < (students + size); tempStudent++)
		if (tempStudent->grade > maxStudent->grade)
			maxStudent = tempStudent;

	return maxStudent;
}

void print_one_student(student* st1) {

	printf("\nName\t\tNumber\t\tGrade\n");
	printf("%-16s%-17u%.2lf\n", st1->name, st1->n, st1->grade);
}
