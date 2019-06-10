/*
* JTSK-32011
* a5_p12.c
* Samundra karki
* sa.karki@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
 *@breif replaceAll : this function takes replaces c's with e's
 *
 *@para *str : this gets a address of the pointer from other functions
 *@para c: this is the character to be replaced
 *@para e : this is the fucntion
 *
 * */
void replaceAll(char *str, char c, char e);

int main() {
    char string[80]; 
	char character_to_replace, character_needed;

    while (1) {
		printf("Enter a string :"); 
        fgets(string, sizeof(string), stdin); // gets a line of code

        
        int character = 1; // we need to know if the entered string is stop or not so we need to define this value to break out of loop
        char stop_word[] = "stop"; // an array to check if the word entered is stop or not
        for (int i = 0; i < strlen(string); i++) {
            if (string[i] != stop_word[i]) 
				character = 0;                     // this shows that character entered is not equal to stop
                break;   
        }
        if (character) break; // if character enterd is stop then the loop break

        printf("Before replacement:%s\n", string); 

        printf("Character you want to replace with:\n");
        scanf("%c", &character_to_replace); 
		getchar();

        printf("Entered number:%c\n", character_to_replace);

        printf("Replace character with:\n");
        scanf("%c", &character_needed); 
		getchar();
        
		printf("You entered %c\n", character_needed);

        replaceAll(string, character_to_replace, character_needed);
        printf("After replacement: %s\n", string);
}

    return 0;
}

void replaceAll(char *str, char c, char e) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c)
            str[i] = e;
    }
}
