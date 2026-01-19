/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
 we can see that the 6th prime is 13.
What is the 10,001st prime number? */


//______________________________________________________________________________

#include <stdio.h>

int is_prime(long long int x)
{
    long long int i;
    int iprime =1;
    for(i=2;i<=x/2;i++)
    {
        iprime = 1;
        if(x%i==0)
        {
            iprime = 0;
            break;
        }
    }
    return iprime;

}
void main(void)
{
    int count = 0;
    int prime ;
    long long int n =1;

    while(count!=10001)
    {
        n++;
        prime = is_prime(n);
        if(prime==1)
        {
            count++;
        }

    }
    printf("the %d prime number is %lld\n",count, n);

}
