/*
 JTSK-32011
 a3_p8.c
 Samundra karki
 sa.karki@jacobs-university.de
*/

#include <stdio.h>

int main(){
	char ch,ch1;
	int n;
	
	scanf("%c",&ch);

	scanf("%d",&n);
	

	if ((n>32 || n<7)){
		printf("Input is invalid\n");
		return 1;
	}

	int i;
	for (i=1; i<=n; i++){
		ch1 = ch - i;
		if( !(ch1>=97 && ch1<=122) ){
            printf("\n");
            return 1;
        }

        
        if(i!=0) printf(", ");
        printf("%c", ch1);
    }
	return 0;
	}

