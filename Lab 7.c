///////////////////////////////////////////////////////////////
//  
//  CPE 2073
//
//  Lab 7
//
//  I certify that the code below is my own work.
//  Emily Onyia RFY198

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


struct _point
{
	double x, y;
};
typedef struct _point Point;

struct _rect
{
	Point ll;
	Point ur;
};
typedef struct _rect Rect;

//Function that returns the distance between the the two points. Pythagorean theorem.
double Distance(Point p1, Point p2)
{
	return sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));
}

//Function that returns the area of a triangle.
double area(Rect r)
{
	double side1 = fabs(r.ur.x - r.ll.x);
	double side2 = fabs(r.ur.y - r.ll.x);
	return side1 * side2;
}

//Test Functions
int main()
{
	Point p1 = { -3, 0 };
	Point p2 = { 5, 7 };
	Rect r = { p1, p2 };

	printf("The distance between (%.1f, %.1f) and (%.1f, %.1f) is %.1f\n",
		p1.x, p1.y, p2.x, p2.y, Distance(p1, p2));

	printf("The area of the rectangle is %.1f\n", area(r));

	getchar();
	return 0;
}