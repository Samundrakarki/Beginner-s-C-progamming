/*
* JTSK-32011
* a5_p6.c
* Samundra karki
* sa.karki@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

int greatest2values(int array[], int size);

int main(){
	int *arr, n;
	//asking for size of the array
	printf("Enter the size of array you prefer: ");
	scanf("%d",&n);
	getchar();
	
	arr = (int*) malloc(sizeof(int) * n);
	if (arr == NULL)
			exit(1);
	for (int i=0; i<n; i++){
		scanf("%d",&arr[i]);
		getchar();
	}
	greatest2values(arr,n);
	return 0;

}
int greatest2values(int array[], int size){
	int greatest_value = INT_MIN;
	int second_greatest_value = INT_MIN;
	for(int i = 0; i<size; i++){
		if(greatest_value<array[i]){
			second_greatest_value = greatest_value;
			greatest_value = array[i];
		}
		else if (second_greatest_value < array[i])
				second_greatest_value = greatest_value;
	}
	printf("Greatest number is : %d \n",greatest_value);
	printf("Second Greatest value is : %d \n",second_greatest_value);
	return 0;
}
