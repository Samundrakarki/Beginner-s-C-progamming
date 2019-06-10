/*
* JTSK-32011
* a5_p6.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
/*
 *@breif circle_parameter: returns the perimeter of the circle
 *
 * @prar radius: is the radius of the circle
 * */
float circle_parameter(float radius);
/*
 10  *@breif circle_area: returns the area of the circle
 11  *
 12  * @prar radius: is the radius of the circle
 13  * */
float circle_area(float radius);


int main(){
	float lower_limit;
	float upper_limit;
	float step;
	char char1[100],char2[100],char3[100];

	fgets(char1, sizeof(char1), stdin);
	sscanf(char1, "%f", &lower_limit);

	fgets(char2, sizeof(char2), stdin);
	sscanf(char2,"%f",&upper_limit);

	fgets(char3,sizeof(char3),stdin);
	sscanf(char3,"%f", &step);
	
	for(float i=lower_limit; i<=upper_limit; i+=step){
		printf("%f %f %f\n",i, i*i*M_PI, 2*M_PI*i);
	}
	
}

