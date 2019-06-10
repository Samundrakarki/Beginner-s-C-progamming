/*
* JTSK-32011
* a4_p5.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include <stdio.h>
/*
 *@breif calculates sum of the provided array
 *@para s[] is the array provided by the user
 *@para div is used to calcualate sum
 * */
float calculate_sum(float s[],int div);
/*
 *@breif calcualtes average if the provided array
 *
 *@para f[] is the array provided by the user
 *@para dic is uesd to calculate average in the function
 * */

float calculate_average(float d[], int div);

int main(){
	int n=10;
	float a[n], tempNumber;
	char char1[100];

	for(int i=0; i<n; i++){
    	fgets(char1, sizeof(char1), stdin);
    	sscanf(char1, "%f", &tempNumber);
		
		if (tempNumber != -99.0){
			a[i] = tempNumber;
		} else{
			n = i;
			break;
		}
		
 	}
	
	printf("%f\n", calculate_sum(a, n));
	printf("%f\n", calculate_average(a,n));
}


float calculate_sum (float s[], int div) {
	float sum = 0;
		
	for (int i=0; i<div; i++){
		sum += s[i];
	}
	return sum;
}

float calculate_average(float d[], int div){
	float average;
	float sum = calculate_sum(d, div);
	average = sum / div;
	return average;
}
