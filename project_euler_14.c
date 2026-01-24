/*The following iterative sequence is defined for the set of positive integers:

    n ->n/2 (n is even)
    n -> 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
Although it has not been proved yet (Collatz Problem),
it is thought that all starting numbers finish at 1.
Which starting number, under one million, produces the longest chain?
NOTE: Once the chain starts the terms are allowed to go above one million.*/


#include <stdio.h>

long long call_even(long long even)
{
    even = even /2;
    return even;
}

long long call_odd(long long odd)
{
    odd = (3*odd)+1;
    return odd;
}

void main(void)
{
    long long n,x,count, min =1, temp =0;

    for(x =3; x<1000000;x++)
    {
        n = x;
        count =1;
        while(!(((n/2) == 1)&&((n%2) == 0)))
        {
            if((n%2) == 0)
            {
                n = call_even(n);
                count++;

            }
            else
            {
                n = call_odd(n);
                count++;

            }
        }

        if(min<count)
        {
            temp = x;
            min = count;
        }

    }
    printf("the min count is %lld and number is %lld", min+1, temp);
}
