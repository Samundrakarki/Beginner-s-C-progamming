/*
* JTSK-32011
* a5_p4.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
/*
 *@breif count_consonants: this function counts the number of cosnants and returns it to the main function
 *
 *@para str[]: gets the string from the main function and does the required calculation.
 *
 * */
int count_consonants(char str[]);
int main(){
		//declaring function
	char strings[100];
	//asks for input form keyboard
	fgets(strings,sizeof(strings),stdin);
	//asks until the entered string is empty
		while (strings[0] != '\n' ){
		printf("Number of consonants=%d\n",count_consonants(strings) );
		fgets(strings, sizeof(strings), stdin);
		}
	return 0;
}
int count_consonants(char str[]){
	int length = (strlen(str)-1);
	int counter = 0;
	char *p = str;
	//if the character is vowels then it will skip that character and reads another character
	for(int j = 0; j<length; j++){
		if( (*(p+j) >= 'A' && *(p+j) <= 'Z')||(*(p+j) >= 'a' && *(p+j) <= 'z')){
			if((*(p+j) == 'A') || (*(p+j) == 'E') || (*(p+j) == 'I') || (*(p+j) == 'O') || (*(p+j) == 'U') || (*(p+j)=='a') || (*(p+j)=='e') || (*(p+j) == 'i') || (*(p+j) == 'o') || (*(p+j) == 'u')){
			continue;
			}
			else{
				counter ++;
			}
		}
	}
	return counter;
}
