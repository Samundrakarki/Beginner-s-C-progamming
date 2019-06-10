/*
* JTSK-32011
* a4_p1.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>

/*
 @breif function position describes one array of char type and other char variable. This function uses for loop to go to index position of given line stored in array str and checks whether it is 'g' or not . If it finds g then return index postion of 'g'.
@para_cahr str[]: This parameter is used to store the entered string form keyboard.
@para_char c: This parameter is the character that needs to be checked whether it belongs in str array or not.
 */


int position(char str[], char c){
	int idx;
	//Loop until end if string
	for (idx = 0; ((str[idx]) != c) && ((str [idx]) != '\0'); ++idx){}
			/*do nothing*/
	return idx;
}
int main(){
	char line[80];
	while(1){
		printf("Enter string:\n");
		fgets(line,sizeof(line),stdin);
		printf("The first occurence of 'g' is :%d\n",position(line,'g'));
	}
	return 0;
}
