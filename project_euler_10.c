/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17
Find the sum of all the primes below two million.*/

#include <stdio.h>

int is_prime(int x)
{
    int i_prime =1,i;
    for(i=2;i<=x/2;i++)
    {
        i_prime=1;
        if(x%i ==0)
        {
            i_prime=0;
            break;
        }
    }
    return i_prime;
}
void main(void)
{
    int n=1,prime;
    double sum =0;
    while(n<2000000)
    {
        n++;
        prime = is_prime(n);
        if(prime)
        {
            sum+=n;
        }
    }
    printf("sum of  number is %lf\n",sum);
}
