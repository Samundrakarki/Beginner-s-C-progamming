/*JTSK -320111
 a3_p2.c
 Samundra karki
 sa.karki11@jacobs-university.de
 */


#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);//reads input from keyboard
	if (((a%2)==0)&& ((a%7)==0)){
		printf("The number is divisible by 2 and 7\n");//prints by the condition if a is divisible by 2 and 7
	}
	else 
		printf("The number is NOT divisible by 2 and 7\n"); 
	return 0;
}


