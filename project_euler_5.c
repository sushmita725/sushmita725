/* 2520 is the smallest number that can be divided by each of the numbers 1 from 10 to
 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 */

#include<stdio.h>

int gcd_two_number(int x,int y)
{
    int temp=0,p,q;
    if(x>y)
    {
        p = x;
        q = y;
    }
    else
    {
        p = y;
        q =  x;
    }
    while((p%q)!=0)
    {
        temp = q;
        q = p%q;
        p = temp;
    }
    return q;
}
void main(void)
{
    int GCD,i;
    long int lcm =2;
    for(i=3;i<20;i++)
    {
            GCD = gcd_two_number(lcm,i);
            lcm = ((lcm*i)/GCD);
    }
    printf("the lcm of two number %d\n", lcm);
}
