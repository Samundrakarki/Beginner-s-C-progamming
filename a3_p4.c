#include<stdio.h>
//float geometric_mean(float arr[], int num);
//float highest_num(float arr[], int num);
int main(){
	float array[100];
	char ch[100];
	int counter=0;
	for (int i=0; i<15; i++){
		scanf("%f",&array[i]);
	}
	for (int i = 0; i<15; i++){
		printf("%f\n",array[100]);
	}
	//printf("%f\n",highest_num(array, counter));
}
/*
float highest_num(float arr[], int num){
	float highest_number;
	for (int i=0; i<num; i++){
		if(arr[0]<=arr[i]){
			highest_number = arr[i]; 
		}
	}
	return highest_number;
}
*/
