
/* if the given number is x in that total number of odd number are x/2 is taken as n
formula for sum of odd number is  = n(2n-1)(2n+1)/3*/


#include<stdio.h>

void main(void)
{
   double x,sum =0,fi,si,ti;

    printf("enter the x numner\n");
    scanf("%lf",&x);
    fi = x/2;               //number of odd number in the given number (n)
    si = ((2*fi)-1);        //2n-1 according to above formula
    ti = ((2*fi)+1);        //2n+1 according to above formula
    sum = (fi*si*ti)/3;

    printf("the sum of odd numer is %lf \n",sum);
}
