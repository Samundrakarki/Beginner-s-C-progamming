/*
* JTSK-32011
* a6_p4.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
/*
 *@berif divby5 : this function returns the array divided by 5 
 *
 *@para arr[] : array passed by the other function
 *@para size : size of the array
 * */
void divby5(float arr[], int size);

int main(){
	int size_of_array;
	float *dynamic_array ;

	printf("How many elements? ");
	scanf("%d", &size_of_array);
	getchar();

	dynamic_array = (float*) malloc(sizeof(float) * size_of_array);

	if(dynamic_array == NULL ){
		exit(1);
	}
    for (int i = 0; i<size_of_array; i++){
			scanf("%f",&dynamic_array[i]);
	}
	divby5(dynamic_array, size_of_array);
	printf("After: \n");
	for(int i = 0; i < size_of_array; i++){
		printf("%f ", dynamic_array[i]);
	}
	printf("\n");
	free(dynamic_array);
	return 0;
}

void divby5(float *arr, int size){
    for (int i = 0; i<size; i++){
		 *arr= *arr / 5;
		 arr++;
    }
}

