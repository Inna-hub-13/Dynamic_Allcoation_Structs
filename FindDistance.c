#include <stdio.h>
#include "my_math.h"

typedef struct {

	double x;
	double y;
} point;

double find_distance(point, point);

void main() {

	point p1 = { 1, 2 };
	point p2 = { 2, 4 };
	double distance = find_distance(p1, p2);
	printf("Distance between (%lf, %lf) and (%lf, %lf): %lf\n",
		p1.x, p1.y, p2.x, p2.y, distance);
}

double find_distance(point p1, point p2) {

	return my_sqrt(my_power(p1.x - p2.x, 2) + my_power(p1.y - p2.y, 2));
}