//Write a program to ask for a students name and the the student's marks in 3 subjetcs.
//Calculate the Average and output if the student passed or failed. When there are no more students instruct the user to type finished. 
//Output how many students in the class, how many passed and how many failed

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( ) {
	int math, science, business, counter, pass, fail;
	float average;
	char name [25], finish [8], passFail [7];
	
	counter = 0;
	
	printf("Enter the student name: ");
	scanf("%s", &name);
	
	pass = 0;
	fail = 0;
	 
while ( strcmp(name, "finished") != 0 ) {
	printf("Enter Math grade: ");
	scanf("%d", &math);
		
	printf("Enter Science grade: ");
	scanf("%d", &science);
		
	printf("Enter Business grade: ");
	scanf("%d", &business);
		
	printf("\n");
		
	average = ( math + science + business) / 3;
		
	if (average <= 50)
		fail = fail + 1;
	else
		pass = pass + 1;
		
	printf("Enter the student name: ");
	scanf("%s", &name);
		
	counter ++;	
	}	
	
printf("There are %d grades: ", counter);	
printf("The average is %5.2f, %d failed and %dd passed!", average, fail, pass);
}
