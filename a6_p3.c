/*
* JTSK-32011
* a6_p3.c
* Samundra karki
* sa.karki@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
/*
 *@berif count_lower : this function is counts lowercase letter from the given string
 *
 *@para str: this parameter will take string from another function
 *
 *
 * */
int count_lower(char * str);
int main(){
	char string[50];
	fgets(string, sizeof(string),stdin);

	while(string[0] != '\n'){
		printf("The  number of lowercase letters are : %d\n", count_lower(string));
		fgets(string, sizeof(string),stdin);	
	}

}

int count_lower(char *str){
		int counter = 0;
		while(*str != '\n'){
			if((*str >= 'a') && (*str <= 'z')){
				counter ++;
			}
			str++;
		}
	return counter;
}
