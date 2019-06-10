
/*
* JTSK-32011
* a6_p5.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
/*
@brief scalar_product= returns the sclara product of two vectors
@para first_vector = takes the first vector from other function
@para second_vector = takes the second vector from other function

*/
double scalar_product(double first_vector[],double second_vector[],int size);
/*
@breif first_vector = calculate its largest and smallest elemsents with respective position
@para first_vector = takes the first vector from other function
@para size = takes the size of the array
*/
void first_vector(double first_vector[], int size);
/*
@breif second_vector = calculate its largest and smallest elemsents with respective position
@para second_vector = takes the first vector from other function
@para size = takes the size of the array
*/
void second_vector(double second_vector[], int size);

int main(){
		int n;	//number of component of two vectors
		double *vector1, *vector2; 	// two vectors with n components
		
		scanf("%d",&n); //getting the number of components
		getchar();

		vector1 = (double*) malloc(sizeof(double)*n); //allocating memory for the vectors
		if(vector1 == NULL){
			printf("Error"); //if in case the memory is not alocated properly
			exit(1);
		}
		vector2 = (double*) malloc(sizeof(double)*n); //allocating meomry for the vectors
		if(vector2 == NULL){ 
			printf("Error");//if in case the memory is not alocated properly
			exit(1);
		}


		//getting elements for two vectors
		for (int i = 0; i<n; i++){
			scanf("%lf",&vector1[i]); 
			getchar();
		}
		for (int i = 0; i<n; i++){
			scanf("%lf",&vector2[i]);
			getchar();
		}
	printf("Scalar product=%f\n",scalar_product(vector1, vector2, n)); //calling scalar_product function to get the scalar product
	
	first_vector(vector1, n); //calling first_vector to get highest and lowest elements and their respective postion
	second_vector(vector2,n);//calling seconf_vector to get highest and lowest elements and their respective postion
	
	//relesing the allocated memory
	free(vector1); 
	free(vector2);
	return 0;
}
double scalar_product(double first_vector[], double second_vector[], int size){

		double array_multiplication;
		double array_summation = 0;
		for(int i = 0; i<size; i++){
			array_multiplication += first_vector[i] * second_vector[i];
		}
		return array_summation;

}
void first_vector(double first_vector[], int size){
	double largest_number = first_vector[0]; //specifying largest_number to be the number at 0th postion
	int position = 0;
	double smallest_number = first_vector[0];//specifying smallest_number to be the number at 0th postion
	int position1 = 0;
	for (int i = 0; i<size; i++){
		if(smallest_number > first_vector[i]){
			smallest_number = first_vector[i]; //if smallest_number is greter than number at other postion then giving it the respective value
			position1 = i;
		}
		if(largest_number < first_vector[i]){
			largest_number = first_vector[i]; //if largest_number is less than number at other postion then giving it the respective value
			position = i;
		}
	}
	//printing repective values of position and number
    printf("The smallest = %lf\n",smallest_number);
    printf("Position of smallest = %d\n", position1);   
	printf("The largest = %lf\n",largest_number);
	printf("Position of largest = %d\n",position);	

}
void second_vector(double second_vector[], int size){
	double largest_number = second_vector[0];//specifying largest_number to be the number at 0th postion
	int position = 0;
	double smallest_number = second_vector[0];//specifying smallest_number to be the number at 0th postion
	int position1 = 0;
	for (int i = 0; i<size; i++){
		if(smallest_number > second_vector[i]){
			smallest_number = second_vector[i]; //if smallest_number is greter than number at other postion then giving it the respective value
			position1 = i;i
		}

		if(largest_number < second_vector[i]){
			largest_number = second_vector[i];//if largest_number is less than number at other postion then giving it the respective value
			position = i;
		}
	}

	//printing repective values of position and number
    printf("The smallest = %lf\n",smallest_number);
    printf("Position of smallest = %d\n", position1);   
	printf("The largest = %lf\n",largest_number);
	printf("Position of largest = %d\n",position);
}
