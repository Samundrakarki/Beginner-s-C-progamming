/*
JTSK-320111
a3_p5
Samundra karki
sa.karki@jacobs-university.de
*/

#include<stdio.h>

int main()
{
    int j,i;
    scanf("%d",&j);//getting input from user
    while (j<=0){
        printf("Input is invalid, reenter value\n");//to print message if the test case is wrong
        scanf("%d",&j);
        }
    for (i=1;i<=j;i++){
            if (i==1){
                printf("%d day = %d hours\n",i,i*24);
            }
            else{
            printf("%d days = %d hours\n",i,i*24);
            }
        }

    return 0;
}



