/*
* JTSK-32011
* a5_p10.c
* Samundra karki
* sa.karki@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float * prod, float *div, float *pwr, float *invb);

int main(){
	float a = 5, b = 7, prod, div, pwr, invb;
	proddivpowinv(a, b ,&prod, &div, &pwr,&invb);
	printf("Product is : %f\n",prod);
	printf("Division is : %f\n",div);
	printf("Power raised of a to the b is : %f\n",pwr);
	printf("inverse of b is : %f\n",invb);
}
void proddivpowinv(float a, float b, float * prod, float *div, float *pwr, float *invb){
	*prod = a * b;
	*div = a/b;
	*pwr = pow(a,b);
	*invb = 1 / b;

}
