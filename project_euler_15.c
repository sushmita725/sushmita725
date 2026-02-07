

/*Starting in the top left corner of a 2X2 grid, and only being able to move to the right and down,
there are exactly 6 routes to the bottom right corner

How many such routes are there through a 20X20 ?  */

#include <stdio.h>

double factorial(int x)
{
    double mult=1;
    while(x>1)
    {
        mult *=x;
        x--;
    }
    return mult;
}
void main(void)
{
    double fact;
    int n;
    printf(" number of ways ");
    scanf("%d",&n);
    fact = factorial(n+n)/(factorial(n)*factorial(n));
    printf(" %lf\n", fact);
}
