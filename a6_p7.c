/*
* JTSK-32011
* a5_p11.c
* Samundra karki
* sa.karki@jacobs-university.de
*/

#include<stdio.h>
/*
@breif findPrime : returns whether the number is prime or not
@para num : reads the number from the user
@para counter : to check whether the number is prime or not

*/
int findPrime(int num, int counter);

int main(){
    int num;
    scanf("%d", &num); //to read the number from user

    if(findPrime(num, 2)) {
        printf("%d is prime\n", num); // if returns true i.e 1 , then this condition is implemented
    } else {
        printf("%d is not prime\n", num); // if returns false i.e. 0, then this condition is implementd
    }

}

int findPrime(int num, int counter) {
    if(num==1) {
        return 0;
    } else if(counter == num) {
        return 1; //if both the number inputed and counter is equal then returns true
    } else if(num%counter == 0) {
        return 0; //if both the number inouted and counter is not equal then returns false
    } else {
        return findPrime(num, counter+1);
    }

}
