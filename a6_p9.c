/*
* JTSK-32011
* a6_p8.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *fs1, *fs2, *fs3; //decleraing file type pointer
	double num1, num2; // values that should be stored in files
	char firstFile[20], secondFile[20] ; //array of characters to the file name

	printf("Please enter the name of the first file: "); 
	fgets(firstFile, sizeof(firstFile), stdin); //this statement asks us the array of characters i.e file name and stores it in firstFile
	firstFile[strlen(firstFile)-1] = '\0'; // we must replace \n with \0 - \0 is terminating character for string.

	printf("Please enter the name of the secodn file: ");
	fgets(secondFile, sizeof(secondFile), stdin);
	secondFile[strlen(secondFile)-1] = '\0';

	fs1 = fopen(firstFile, "r"); //opening firstFile i.e. name of the file we had inputed in read mode 
	fs2 = fopen(secondFile, "r"); //opening firstFile i.e. name of the file we had inputed in read mode
	
	if(fs1 == NULL || fs2 == NULL){
		printf("Error: File not found"); //if in case the files are not created prior to execution of program
		exit(1);
	}

	//getting input for two doubles
	fscanf(fs1, "%lf", &num1); 
	fscanf(fs2, "%lf", &num2);

	//closing the files we had enetered
	fclose(fs1); 
	fclose(fs2);
	
	//opening a new file in write mode
	fs3 = fopen("result.txt", "w");
	if(fs3 == NULL ){
		printf("Error: File not found"); //if in case the file is not created.
		exit(1);
	}

	//declearing and formulating all the operation to be printed in new file
	double sum, product, div, diff;
	sum = num1 + num2;
	diff = num1 - num2;
	product =  num1 * num2;
	div = num1/num2 ;

	//printing all the operations to be printed in new file
	fprintf(fs3, "Sum: %lf\n ", sum); 
	fprintf(fs3, "Difference: %lf\n ", diff);
	fprintf(fs3, "Product: %lf\n ", product);
	fprintf(fs3, "Division: %lf\n ", div);
	
	//closing the file that we had opened
	fclose(fs3);

	return 0;
}
