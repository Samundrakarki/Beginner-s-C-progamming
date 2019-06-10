
/*
* JTSK-32011
* a5_p8.c
* Samundra karki
* sa.karki@jacobs-university.de
*/
#include<stdio.h>
/*
 *@breif second_diagonal : prints the element under second diagonal 
 *@para arr[][]: reads the array given by main function
 *@para number : size of the array
 * */
int under_diagonal(int arr[30][30], int number);

int main(){
	int array [30][30];
	int number;

	scanf("%d",&number);
	getchar();
	
	for (int i =0; i<number; i++){
		for(int j=0; j<number; j++){
			scanf("%d",&array[i][j]);
			getchar();
		}
	}
	printf("The entered matrix is:\n");
	for(int i = 0; i <number; i++){
		for (int j = 0; j<number; j++){
			printf("%d ", array[i][j]);
			}
		printf("\n");
	}
	under_diagonal(array,number);
	return 0;
}
int under_diagonal(int arr[30][30], int number){
	printf("Under the secondary diagonal:\n");
	for(int i = 0; i<number; i++){
		for (int j = 0; j<number; j++){
			int sum = i+j;
			if(sum>=number){
				printf("%d ",arr[i][j]);
			}
		}
	}
	printf("\n");
	return 0;
}
