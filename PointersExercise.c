//
// Created by Michal Roziel on 16.07.24.
//

#include "../../../../../Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/stdio.h"


void firstExercise(void) {

    int i = 42;
    int *pi;
    int k;

    printf("i = %d\n",i);
    printf("&i = %p\n", &i);
    printf("&pi = %p\n", &pi);
    printf("pi = %p *pi = %d\n", pi, *pi);

    pi = &i;
    printf(" pi = %p    *pi = %d\n", pi, *pi);

    *pi = 84;

    printf("i = %d\n", i );
    printf("pi = %p *pi = %d\n", pi, *pi);

    i = 123;
    printf(" i = %d\n", i );
    printf("pi = %p *pi = %d\n", pi, *pi );


}

void secondExercise(void) {
    //int i = 54;

    int *ptr = NULL;

    //ptr = &i;

    printf("The value of ptr is : %p\n", ptr );

    if(ptr)
        *ptr = 42;
}

long convertDays(long *totalDays, int *ptrYears, int *ptrMonths, int *ptrDays) {


    long total = *totalDays;
    int yearsInDays = *ptrYears * 365;
    int monthsinDays = *ptrMonths * 30;

    int days = *ptrDays;

    total = yearsInDays + yearsInDays + monthsinDays;

    return total;

}


int main(void){

    int years, months, days;
    long totalDays;     // gesamtzahl der tage die eine person gelebt hat


    printf("Please Enter how many years the person has lived");

    scanf("%d",&years);

    printf("Please Enter how many months the person has lived");
    scanf("%d",&months);

    printf("Please Enter how many days the person has lived");
    scanf("%d",&days);


    int *pY;
    int *pM;
    int *pD;
    long *pTotalDays;

    pY = &years;
    pM = &months;
    pD = &days;
    pTotalDays = &totalDays;

    long ergebnis = convertDays(pTotalDays, pY,pM,pD) /2;

  printf(" the value is : %ld", ergebnis ) ;




    return 0;
}


