/* Write a program to ask for the diameter of a circle in centimeters. Output the area of the circle. Area = pi r^2 */
#include<stdlib.h>
#include<stdio.h>

int main ( ) {
	float area, radius, pi, diameter;
	
	pi = 3.14159265359; 
	
	printf("Enter the diameter: ");
	scanf("%f", &diameter);
	
	radius = diameter/2;
	
	area = pi * (radius * radius);

	printf("Area of this circle is: %5.1f \n", area);

	system("pause");
}

