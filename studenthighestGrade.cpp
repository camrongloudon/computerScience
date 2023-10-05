/* Write a program to ask for a student's name and how many subjects they are doing.
   Ask for the marks for each subject, calculate the average and output if the student passed or failed. 
   Output the amount of students in the class, the amount passed, the amount failed after typing finished.
   
   Lastly, output the name of the student that got the highest average score.*/ 
   
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( ) {
	int grade, counter, pass, fail, howMany, topScore, total, forCounter, studentAverage;
	float average;
	char name [25], finish [8], passFail [7], topStudent[25];
	
	counter = 0;
	total = 0;
	topScore = -1;
	average =0;
	
	printf("Enter the student name: ");
	scanf("%s", &name);
	
	pass = 0;
	fail = 0;
while ( strcmp(name, "finished") != 0 ) {
	printf("How many subjects are you doing?: ");
	scanf("%d", &howMany);
	
	for ( int x = 1; x <= howMany; x++ ) {
		printf("Enter the grade: ");
		scanf("%d", &grade);
		
		total = total + grade;
	}
	average = total / howMany;
	
	if (average <= 50)
		fail = fail + 1;
	else
		pass = pass + 1;
		
	if ( average > topScore ) {
		topScore = average;
		strcpy( topStudent, name );
	} 

	printf("Enter the student name: ");
	scanf("%s", &name);
	
	counter ++;	
	total = 0;
}	
//	all the grades are being added together in the average variable. so the comparison for top score will always be the last person entered. 
printf("There are %d grades: ", counter);	
printf("%d failed and %d passed! \n", fail, pass);
printf("%s had the highest score", topStudent);
}

