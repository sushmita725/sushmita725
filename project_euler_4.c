/*A palindromic number reads the same both ways. The largest palindrome
made from the product of two 2-digit numbers is 9009 = 91 * 99
Find the largest palindrome made from the product of two 3-digit numbers.*/

#include<stdio.h>

int reverse_number(int reverse)
{
    int temp,rever =0,a,b;
    temp =reverse;
    while(reverse!=0)
    {
        rever = rever * 10 + (reverse %10);
        reverse /=10;
    }
    if(temp==rever)
        return 1;
    else
        return 0;
}

void main(void)
{
    int x ,revert, i,j, higher=1;

    for(i =999;i>100;i--)
    {
        for(j=i;j>100;j--)
        {
            x = i*j;

            revert = reverse_number(x);
            if(revert)
                if(x > higher)
                {
                    higher = x;
                }
            else
                continue;
        }
    }
    printf("the number is highest %d\n", higher);
}
