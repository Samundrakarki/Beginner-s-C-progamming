/*
* JTSK-32011
* a3_p4.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
/*
 *@breif sum25: sum second and fifth position of the given array
 *
 * @para v[]: stores the array given by user
 * @para n : used to know the index of value
 * */
double sum25(double v[],int n);

int main(){
	int k;
	double s[20];
	char char1[100], char2[100];
	
	fgets(char1,sizeof(char1),stdin);
	sscanf(char1,"%d",&k);
	
	for(int i=0; i<k; i++){
			fgets(char2, sizeof(char2),stdin);
			sscanf(char2,"%lf",&s[i]);
	}
	for(int i=0; i<k; i++){
	printf("%lf\n",s[i]);
	}
	printf("%lf\n",sum25(s,k));

}
double sum25(double v[], int n){
	double sum ;
	sum = v[2] + v[5];
	return sum;
}
