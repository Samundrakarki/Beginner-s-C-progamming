/*
* JTSK-32011
* a5_p9.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
/*
 *@breif prodminmax(): returns the product of minimum and maximum value of the given array
 *
 *@para arr[]: gets the array from other function
 *@para n: size of the given array
 * */
int prodminmax(int arr[], int n);

int main(){
	int size;
	int *array;

	scanf("%d",&size);
	getchar();

	array = (int*) malloc(sizeof(int) * size);

	if(array == NULL){
		printf("Error");
		exit(1);
	}

	for(int i = 0; i<size; i++){
		scanf("%d",&array[i]);
		getchar();
	}
	printf("Prodcuct is : %d\n",prodminmax(array,size));
	free(array);
	return 0;
}
int prodminmax(int arr[], int n){
	int highest_value = arr[0];
	int lowest_value = arr[0];
	for (int i = 0; i<n; i++){
		if(highest_value<arr[i]){
			highest_value = arr[i];
		}
	}
	for (int j = 0; j<n; j++){
		if(lowest_value > arr[j]){
			lowest_value = arr[j];
		}
	}
	int product= highest_value * lowest_value;
	return product;
}
