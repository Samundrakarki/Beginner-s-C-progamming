/*
* JTSK-32011
* a4_p7.c
* Samundra karki
* sa.karki@jacobs-university.de
*/


#include <stdio.h>
/*
 * @breif product: used for product of two values
 * @para a: a floating point value given by user
 * @para b: a floating point value given by user
*/
float product(float a, float b);
/*
* @breif product: used for product of two values
  * @para a: a floating point value given by user
  * @para b: a floating point value given by user
  * @para *p: a floating point pointer used for function calling by referance
  */
float productbyref(float a, float b, float *p);
/*
* @breif product: used for product of two values
* @para a: a floating point pointer which points to address of value given by user
* @para b: a floating point pointer which points to address of value given by user
 */
void modifybyref(float *a, float *b);
int main(){
	// declaring variable
	float c;
	float d;
	float e;
	char ch[100],ch1[100];

	//asking for input
	fgets(ch,sizeof(ch),stdin);
	sscanf(ch,"%f",&c);

	fgets(ch1, sizeof(ch1),stdin);
	sscanf(ch,"%f",&d);
	
	printf("%f\n",product(c,d));
	
	printf("%f\n",productbyref(c,d,&e));

	modifybyref(&c,&d);

	printf("%f\n",c);
	printf("%f\n",d);
	return 0;
}

float product(float a, float b){
	float product1= a*b;
	return product1;
}
float productbyref(float a, float b,float *p){
	float product2= a*b;
	p =  &product2;
	return *p;
}
void modifybyref(float *a, float *b){
	*a =(float) *a+3;
	*b = (float) *b+11;
}
