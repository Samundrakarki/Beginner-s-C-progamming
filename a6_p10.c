/*
* JTSK-32011
* a6_p10.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *file1, *file2, *file3; // declaring all the file type pointer
	char input1[1024]; // useful for storing  a line 
	char input2[1024];
	file1 = fopen("text1.txt","r"); //opening text1.txt file
	file2 = fopen("text2.txt","r");  //opening text2.txt file 
	file3 = fopen("merge12.txt","w"); //opening merge12.txt file

	if((file1==NULL) || (file2 == NULL) || (file3 == NULL)){
		printf("Error : Cannot open the file"); // if the file doesnt exist then it stops the execution of the file
		exit(1);
	}
	
	while(fgets(input1, 1024, file1) ){
		fprintf(file3,"%s", input1); //reads a line and prints it in merge.txt
	}
	fclose(file1);
	while( fgets(input2, 1024, file2)){
		fprintf(file3,"%s", input2); //reads a line and prints it in merge.txt
	}
	fclose(file2);
	fclose(file3);
}
