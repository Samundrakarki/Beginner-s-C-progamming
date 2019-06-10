/*
JTSK 320111
a6_p8.c
Samundra karki
sa.karki@jacobs-univeristy.de
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp1; //declaring a file tyoe pointer
	fp1 = fopen("chars.txt", "r"); //opening the file type pointer
	if(fp1 == NULL){
		printf("Error Occured\n"); //if the file doesnot exist
		exit(1);
	}

	char c1, c2;
	c1 = getc(fp1); // reads the first character if the file
	c2 = getc(fp1); // reads the second character as it moves to next character because of being file pointer
	fclose(fp1);//cloasing the file

	FILE *fp2;
	fp2 = fopen("codesum.txt", "w"); // opening a file to store the sum of two numbers
	if(fp2 == NULL){
		printf("Error Occured\n");
		exit(1);
	}

	int sum;
	sum = c1 + c2; // sum is assigned to sum of two pointers
	
	fprintf(fp2, "%d\n", sum); // prints the sum in codesum.txt

	fclose(fp2);//closing the file
	return 0;
}
