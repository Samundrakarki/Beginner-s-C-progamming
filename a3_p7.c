/*
* JTSK-32011
* a3_p7.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include <stdio.h>

int main(){
	char ch,ch1;
	int n;

	scanf("%c%c",&ch,&ch1);

	scanf("%d",&n);

	int i;
	for (i=1; i<=n; i++){
		printf("%c%c - %d\n",ch,ch1,i);
	}
	return 0;
}
