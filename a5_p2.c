/*
* JTSK-32011
* a5_p2.c
* Samundra karki
* sa.karki@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	fgets(text, sizeof(text), stdin);

	for(int i=0; i<strlen(text)-1; i++){

			if (i%2==1){
				printf(" ");
		}
		printf("%c\n",text[i]);
	}
	return 0;

}
