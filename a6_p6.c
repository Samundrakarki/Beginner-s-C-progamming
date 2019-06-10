/*
* JTSK-32011
* a6_p6.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
/*
 *@recursive_function : returns the a number in decreasing order until it reaches one.
 *@para n : takes the integer form other function
 * */
void recursive_function(int n);

int main(){
	int a_number = 0;

	scanf("%d", &a_number);
	
	recursive_function(a_number);

	return 0;
}

void recursive_function(int n){
		if(n==0 || n==1){ // this will check for the base condition
			printf("%d ",n);
			exit(1);
		}
		printf("%d",n);
		recursive_function(n-1);// this call will pass 8 to the fucntion
}
