/*
* JTSK-32011
* a5_p11.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

int count_insensitive(char *str, char c);

int main(){
	char string[100];
	char ch;

	fgets(string, sizeof(string),stdin);
	
	scanf("%c",&ch);
	getchar();

	printf("String contains %d letter.\n",count_insensitive(string,ch));
}

int count_insensitive(char *str, char c){
	int counter;
	int length = strlen(str) - 1;
	for (int i = 0; i<length; i++){
		if (c==str[i]||(c+32)==str[i]){
			counter++;
		}
	}
	return counter;
}
