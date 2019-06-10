/*
 JTSK- 320111
 a3_p3.c
 Samundra karki
 sa.karki@jacobs-univeristy.de
 */


#include <stdio.h>

int main() {
	char a;
	scanf("%c",&a);
	int b = (int) a;
	if ((b>=0 && b<=47) || (b>=58 && b<=64)||(b >=91 && b<=96)||(b>=123 &&b<=127) ){
		printf("%c is some other symbol\n",a);}//Checks the condition and prints if it is some other character or not
	else if(b>=48 && b<=57){
		printf("%c is a digit\n",a);}//checks the condition and prints if it is integer or not
	else if ((b>=65 && b<=90) || (b>=97 && b<=122) ){
		printf("%c is a letter\n",a);}//checks the condtion and prints if it is letter or not
	else
		printf("error");//checks if the is an error
	return 0;

}
