# include <stdio.h>
# include <stdlib.h>

int main (){
    
int sum, prod;
float x, y, divide;

printf("Enter a number: \n");
scanf("%f", &x);

printf("Enter another: \n");
scanf("%f", &y);

printf("\n");

sum = x + y;
prod = x * y;
divide = x / y;

printf("%d is the total\n", sum);
printf("\n");

printf("%d is the product\n", prod);
printf("\n");

printf("%f is the divison\n", divide);
printf("\n");


system("pause");

}
