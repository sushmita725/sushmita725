/* 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26
What is the sum of the digits of the number 2^1000?*/


#include <stdio.h>

void main(void)
{
    long long sum =0;
    int squ[500]={0};
    int i,j, temp =1, carry =0;
    int length = 1;
    squ[0] =2;
    int n =1000;

    for(i =2; i<=n;i++)
    {
        for(j = 0;j<length;j++)
        {
            temp = squ[j]*2+carry;
            squ[j]= temp % 10; //remender
            carry = temp /10;   //quoet
        }
        while(carry)
        {
            squ[length] = carry % 10;
            carry /= 10;
            length++;
        }

    }
    for(i = length; i>=0; i--)
    {
        printf("%d",squ[i]);
        sum += squ[i];
    }
    printf("\n");
    printf("%lld",sum);
}

