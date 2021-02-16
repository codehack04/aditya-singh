#include<stdio.h>
void main()
{

    int n,sum=0,remainder;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;

    }
    printf("sum of the digit of the number is:=%d",sum);
}
