/*
* JTSK-32011
* a6_p1.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
/*
 *@breif triangle : takes a character and a integer and prints the value in triangualr form
 *
 *@para ch: takes the character which should be printed in triangular form
 *@para num: takes the height and the loop in which it should be calculated
 *
 * */
int triangle (char ch, int num);
int main(){
	int number;
	char c;

	scanf("%d",&number);
	getchar();

	scanf("%c",&c);
	getchar();

	triangle(c,number);

	return 0;

}

int triangle(char ch, int num){
		for (int i = num; i >= 1; i--){
			for(int counter=0; counter<i; counter++){
			printf("%c",ch);
			}
			printf("\n");
		}
	return 0;
}
