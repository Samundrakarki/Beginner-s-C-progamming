
/*
* JTSK-32011
* a3_p6.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include <stdio.h>

int main() {
	float x;
	int n;
	scanf("%f",&x);
	scanf("%d",&n);
	
	while (n<=0){
		printf("Input is invalid, reenter value\n");
		scanf("%d",&n);
	}
	int i = 0;

	for (i=1; i<=n ; i++){
		printf("%f\n",x);
	}
}
