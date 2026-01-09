/*The prime factors of 13195 are 5, 7, 13 and 29
What is the largest prime factor of the number 600851475143  */
//_______________________________________________________________________________

#include<stdio.h>

void main(void)
{
    long long n ,i;
    int primefactor =2;
    printf("Enter the number\n");
    scanf("%lld",&n);
    for(i=2;i<=n;i++)
    {
        if((n%i)==0)
        {
            n=n/i;
            if(primefactor<i)
                primefactor = i;
        }
    }
    printf("greatest primefactor %d",primefactor);
}


