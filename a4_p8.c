/*
* JTSK-32011
* a3_p4.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>// for using some in built function in String 

int main(){
	char one[100];
	char two[100];
	char ch, ch1[100];

	fgets(one, sizeof(one), stdin);
	one[strlen(one)-1] = '\0';	//replace last character of '\n' with '\0' for concatination
	fgets(two, sizeof(two),stdin);
	two[strlen(two)-1] = '\0'; 

	fgets(ch1,sizeof(ch1),stdin);//comparing the string
	sscanf(ch1, "%c",&ch);

	printf("length1=%d\n", (int) strlen(one));//strlen() return value in size_t which shiuld be casted to int
	printf("length2=%d\n", (int) strlen(two));

	char tempOne[100];
	strcpy(tempOne, one);//concatinated words must be placed on new string so that string one remains unchanged
	strcat(tempOne,two);
	printf("concatenation=%s\n", tempOne);

	char third_string[100];
	strcpy(third_string,two);//copies the string from two to thrid_string
	printf ("copy=%s\n",third_string);
	
	//comparing two strings
	int comp;
	comp=strcmp(one, two);
	if(comp<0){
		printf("one is smaller than two\n");
	}
	else if(comp == 0){
		printf("one is equal to two\n");
	}
	else {
		printf("one is larger than two\n");
	}

	//searching for strings
	char *position;
	position = strchr(two, ch);
	int non_character = 1;
	while (position != NULL){
		printf("postion=%ld\n",position - two);
		position = strchr(position+1, ch);
		non_character = 0;
	}
	if(non_character){
		printf("The character is not in the string \n");
	}
	return 0;
}
