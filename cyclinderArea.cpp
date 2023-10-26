/*  Write a program to ask for the radius and hight of the cylinder. Output the area of the top and bottom then the area for the sides then add the areas. */

#include<stdio.h>
#include<stdlib.h>

int main () {
	float radius, height, area, pi, circle, cylinder;
	
	pi = 3.14159265359;
		
	printf("Enter the base and height of the cylinder: ");
	scanf("%f %f", &radius, &height);
	
	cylinder = 2 * pi * (radius * radius);
	circle = 2 * pi * radius * height;
	
	area = circle + cylinder;
	printf("Area of Circle: %5.2f", circle);
	
	printf("\n");
	printf("Area of Cylinder: %5.2f", cylinder);
	
	printf("\n");
	printf("Area of the Entire Shape: %5.2f", area);
}
