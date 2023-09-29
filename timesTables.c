#include<stdio.h>
#include<stdlib.h>

int main () {
    int num, ans;
    
    printf("What tables would you like to see: ");    
    scanf("%d", &num);

    for ( int x = 1; x < 13; x++) {
        ans = num * x;
        printf("%d * %d = %d",num,  x, ans);
        printf("\n");
    }      
}
