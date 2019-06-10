/*
 JTSK - 320111
 a3_p1.c
 Samundra karki
 sa.karki@jacobs-univeristy.de
 */
#include <stdio.h>

int main(){
	int i = 8; 
	while (i >=4){//here these brackets were missing and comiplier got confused how many lines to execute in While loop.
		printf("i is %d\n", i);
		i--;
	}
	printf("Thats it . \n");
	return 0;
}
