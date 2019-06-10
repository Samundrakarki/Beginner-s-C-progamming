/*
* JTSK-32011
* a6_p2.c
* Samundra karki
* sa.karki@jacobs-university.de
*/


#include<stdio.h>
/*
 *@breif divby5: divides the all of the element of array by 5
 *
 *@para arr: array that should be divided by 5
 *@para size: 
 *
 * */

void divby5(float arr[],int size);

int main(){
	float array[] = {5.5,6.5,7.75,8.0,9.6,10.36};
	float new_array[6];
	int  size_of_array=6;
	
	printf("Before:\n");
	for (int i = 0; i<size_of_array; i++){
		printf("%.3f ",array[i]);
	}
	printf("\n");
	
	printf("After:\n");

	divby5(array,size_of_array);
	for(int i = 0; i<size; i++){
	printf("%.3f ",new_array[i]);
	}
	printf("\n");
	
	return 0;
}
void divby5(float *arr, int size){
	
	for (int i = 0; i<size; i++){
		new_array[i]= arr[i] / 5;
	}
	//printf("\n");
	//printf("After:\n");
	//for(int i = 0; i<size; i++){
	//printf("%.3f ",new_array[i]);
	//}
	//printf("\n");
}
