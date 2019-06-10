/*
* JTSK-32011
* a4_p3.c
* Samundra karki
* sa.karki@jacobs-university.de
*/


#include <stdio.h>
/*
 @breif to_pounds : this function takes two integers values and sums them. After that it converts that sumed kg to pounds.
 @para kg : This parameters takes the int values assigned to it by other function which is our given kg.
 @para g : This parameters takes the int values assigned to it by other fucntion which is our given g.
 */
int to_pounds(int kg, int g);

int main(){
	int a;
	scanf("%d\n",&a);
	int b;
	scanf("%d",&b);
	to_pounds(a,b);
	return 0;
}

int to_pounds(int kg,int g){
	float b = (float) g/1000;
	float sum = (float) kg + b;
	float pounds = sum * 2.2;
	printf("Result of conversion: %f\n",pounds);
	return 0;
}
