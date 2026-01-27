/*Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a != b, then a and b are an amicable pair and each of a and b are called amicable numbers.</p>
For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284.
The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
Evaluate the sum of all the amicable numbers under 10000*/

#include<stdio.h>

void main(void)
{
    long long i,n,sum =0,sum1=0, diff=0, diff1=0,amicable=0;

    for( n =2; n<10000;n++)
    {
        sum =0;
        sum1 =0;
        for(i = 1;i< n; i++)
        {
            if((n%i)==0)
            {
                sum +=i;
            }
        }
        diff = sum;
        for(i = 1;i< sum; i++)
        {
            if((sum%i)==0)
            {
                sum1 +=i;
            }
        }
        diff1 = sum1;
        if((n==diff1)&&(n!=diff))
        {

             printf("number is - %lld\n",n );
             printf("sum - %lld\n",diff );
             amicable +=n;

        }

    }
    printf("amicable is - %lld\n",amicable );

}
