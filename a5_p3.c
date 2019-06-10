#include<stdio.h>
#include<math.h>

float geometric_mean(float arr[], int num);
float highest_number(float arr[], int num);
float lowest_number(float arr[], int num);
float array_sum(float arr[], int num);

int main(){
	//declaring variables	
	float array_elements[100];
	int counter = 0;
	char ch;

	//asking for input
	for(int i = 0; i<15; i++){
	scanf("%f", &array_elements[i]);
	getchar();
	counter++;
	}
	scanf("%c",&ch);
	getchar();

	//using decision making case or switch case
	switch(ch){
		case 's':
				printf("Sum is : %f",array_sum(array_elements, counter));
				break;
		case 'm':
				printf("Geometric mean is : %f",geometric_mean(array_elements, counter));
				break;
		case 'h':
				printf("Highest number in array is : %f ", highest_number(array_elements, counter));
				break;
		case 'l' :
				printf("Lowest number in array is : %f", lowest_number(array_elements, counter));
		default:
				printf("Something might have been wrong. Please check");
		
	}
	
}

float geometric_mean(float arr[], int num)
{
	float array_multiplication;
	for(int i = 0; i<num; i++){
		array_multiplication *= arr[i];
	}
	float result = powf(array_multiplication, 1/num);
	return result;
}

float highest_number(float arr[], int num){
	float highest_number = arr[0];
	for(int i = 0; i<num; i++){
		if(highest_number<=arr[i]){
			highest_number=arr[i];
		}
	}
	return highest_number;
}

float lowest_number(float arr[], int num){
	float lowest_number = arr[0];
	for(int i=0; i<num; i++){
		if(lowest_number >= arr[i]){
			lowest_number = arr[i];
		}
	}
	return lowest_number;
}

float array_sum(float arr[], int num){
	float sum;
	for(int i = 0; i<num; i++){
		sum += arr[i];	
	}
	return sum;
}
