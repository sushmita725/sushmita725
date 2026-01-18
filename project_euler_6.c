/*The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385.
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025.
Hence the difference between the sum of the squares of the
first ten natural numbers and the square of the sum is 3025 - 385 = 2640
Find the difference between the sum of the squares of the
first one hundred natural numbers and the square of the sum.*/
//----------------------------------------------------------------------------------------


#include <stdio.h>

void main(void)
{
    long long int sum_sq,sq_sum,sum, diff ;
    int n;
    printf("Enter the number up to u need\n");
    scanf("%d",&n);
    sum = (n *(n +1)/2);
    printf("the sum of %d th natural number %lld\n",n, sum);
    sum_sq = sum *sum;
    printf("the sum_sq of %d th natural number %lld\n", n,sum_sq);
    sq_sum = ((n *(n+1)*((2*n)+1))/6);
    printf("the sq_sum of %d th natural number %lld\n",n, sq_sum);
    if(sum_sq > sq_sum)
    {
        diff =  sum_sq - sq_sum ;
    }
    else
    {
        diff = sq_sum - sum_sq;
    }

    printf("the diff of %d th natural number %lld\n",n, diff);


}
