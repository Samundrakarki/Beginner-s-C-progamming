
/*
* JTSK-32011
* a3_p9.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>

int main(){
	
	char ch;
	scanf("%c",&ch);
	
	int d;	
	scanf("%d",&d);

	double degree_celsius[100];
      int i;
      for (i=0; i<d; i++)
      {
              scanf("%lf",&degree_celsius[i]);
      }
	double sum;
	double mean;
	switch(ch){
		case 's':
			for (int a=0; a<d; a++){
				sum = sum + degree_celsius[a];
			}
			printf("%lf\n",sum);
			break;
		case 'p':
			for (int b=0; b<d; b++){
			printf("%lf\n",degree_celsius[b]);
			}
			break;
		case 't':
			for (int c=0; c<d; c++){
			double fahrenheit = (double) (9/5) *( degree_celsius[c] ) + (32);
			printf("%lf\n",fahrenheit);
			}
			break;
		default :
			for (int a=0; a<d; a++){
                 sum = sum + degree_celsius[a];
             }
				mean = sum/d;
				printf("%lf\n",mean);
	}

}
