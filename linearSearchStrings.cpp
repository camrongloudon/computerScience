// use LINEAR seach to sort an array of random WORDS. 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int linearSearch(char arr[][25], int size, char key[25]) {
	for (int x = 0; x <= size; x++)
		if(strcmp(arr[x], key) == 0)
			return x;
	return -1;
}

int main ( ) {
	char word[5][25], searchWord[25];
	
	strcpy(searchWord, "camron");
	
	for (int x = 0; x <= 4; x++) {
		printf("Enter a WORD: ");
		scanf("%s", &word[x]);
	}
	
	int position = linearSearch(word, 5, searchWord);
		
	printf("The WORD you search is at position %d", position);
}
