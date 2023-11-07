/*  Write a program to ask for the radius and hight of the cylinder. Output the area of the top and bottom then the area for the sides then add the areas. 
	Write 3 functions to perform the above task. The Cyclinder area function should print the answer immediately */

#include<stdio.h>
#include<stdlib.h>

float circle(float radius) {
	float circleAnswer, pi; 
	pi = 3.14159265359;
	circleAnswer = 2 * pi * (radius * radius);
	return circleAnswer;
}

float cylinder(float radius, float height) {
	float cylinderAnswer, pi; 
	pi = 3.14159265359;
	cylinderAnswer = 2 * pi * radius * height;
	return cylinderAnswer;
}

void shapeArea(float circle, float cylinder) {
	float area;
	area = cylinder + circle;
	printf("Area of the ENTIRE SHAPE is: %5.2f", area);
}

int main () {
	float radius, height, circleArea, cylinderArea, area;
		
	printf("Enter the base and height of the cylinder: ");
	scanf("%f %f", &radius, &height);
	
	circleArea = circle(radius);
	cylinderArea = cylinder(radius, height);
	
	printf("Area of the CIRCLE: %5.2f", circleArea);
	printf("\n");
	
	printf("Area of the CYLINDER: %5.2f", cylinderArea);
	printf("\n");
	
	shapeArea(circleArea, cylinderArea);
}
