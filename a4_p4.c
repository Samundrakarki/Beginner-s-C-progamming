/*
* JTSK-32011
* a4_p4.c
* Samundra karki
* sa.karki@jacobs-university.de
*/
#include<stdio.h>
/*
 *@breif printf: used to print a trapeziod of height n and base m+n-1
 *
 * @para n: used to know height of teapezoid
 * @para m: used to calculate base of trapezoid
 * @para c: used character to make the trapezoid
 * */
 
void print_form(int n, int m, char c);
int main() {
	int a,b;
	char ch;
	char char1[100], char2[100], char3[100];
    fgets(char1, sizeof(char1),stdin );
    sscanf(char1,"%d",&a);
 
    fgets(char2, sizeof(char2),stdin );
    sscanf(char2,"%d",&b);
 
    fgets(char3, sizeof(char3),stdin );
    sscanf(char3,"%c",&ch);

	print_form(a,b,ch);
	return 0;



}

void print_form(int n, int m, char c){
	
	for (int i =0; i<n; i++){

		for (int i = 1; i<=m; i++){
		printf("%c",c);
		}
		printf("\n");
		m++;
	}

}
