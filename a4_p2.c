/*
* JTSK-32011
* a3_p2.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include <stdio.h>
/*
 @breif convert: This function convert cm cm to km. 
 @para cm: This parameter is used in the operation as main funcion assigns int value to cm which shouls to converted to km.
 */
int convert(int cm){
	float to_km = (float) cm/100000;
	printf("Result of conversion: %lf\n",to_km);
	return 0;
}
int main(){
	int a;
	scanf("%d",&a);
	convert(a);
	return 0;
}
