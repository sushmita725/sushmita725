/*n! means n (n - 1) times \cdots \times 3 \times 2 \times 1$.</p>
For example, $10! = 10*9*8*7*6*5*4*3*2*1 = 3628800
and the sum of the digits in the number 10 is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27
Find the sum of the digits in the number $100!*/

#include <stdio.h>

void main(void)
{
    long long sum =0;
    int fac[200]={0};
    int i,j, temp =1, carry =0;
    int    length = 1;
    fac[0] =1;
    int n =100;

    for(i =2; i<=n;i++)
    {
        for(j = 0;j<length;j++)
        {
            temp = fac[j]*i+carry;
            fac[j]= temp % 10; //remender
            carry = temp /10;   //quoet
        }
        while(carry)
        {
            fac[length] = carry % 10;
            carry /= 10;
            length++;
        }

    }
    for(i = length; i>0; i--)
    {
        printf("%d",fac[i]);
        sum += fac[i];
    }
    printf("\n");
    printf("%lld",sum);
}
