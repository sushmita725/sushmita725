/*A Pythagorean triplet is a set of three natural numbers, a < b < c,
 for which, a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2  3+4+5 =12
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc */

#include <stdio.h>

void main(void)
{
    int a,b,c;
    long mul;
    for(a=1;a<500;a++)
    {
        for(b = a; b<500;b++)
        {
            for(c = b; c<500;c++)
            {
                if((((a+b+c)==1000)) &&(((a*a)+(b*b))==c*c))
                {
                    //printf(" a is %d , b is %d and c is %d\n", a,b,c);
                    //if(((a*a)+(b*b))==c*c)
                    {
                       //printf(" a - %d , b - %d and c - %d\n", a,b,c);
                        mul = a*b*c;
                       printf(" mul of abc is %ld\n",mul);
                    }
                }
            }

        }
    }

}
