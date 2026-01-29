/*Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:

1634 = 1^4 + 6^4 + 3^4 + 4^4
8208 = 8^4 + 2^4 + 0^4 + 8^4
9474 = 9^4 + 4^4 + 7^4 + 4^4

As 1 = 1^4 is not a sum it is not included.
The sum of these numbers is 1634 + 8208 + 9474 = 19316
Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.*/


#include <stdio.h>
#include <math.h>

int pow_of_4(int x)
{
    int n1[5]={0},n2[5]={0},n3,n4,temp=0,j,sum=0;
    temp =x;
    for(j =1; j<=7;j++)
    {
        n1[j] = temp %10;
        temp /=10;
        n2[j] = pow(n1[j],5);
        sum+=n2[j];
    }
    if(x == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
void main(void)
{
    int n, i;
    long sum=0;
    for(i = 1000;i<9999999;i++)
    {
       n = pow_of_4(i);
       if(n)
       {
           printf("n is %d\n",i);
           sum +=i;

       }
    }
    printf("sum is %d\n",sum);
}
