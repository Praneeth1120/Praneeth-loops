//sum of squares of digits of a given number
#include<stdio.h>
main()
{
    int n,d,sum=0,square;
    scanf("%d",&n);
    while(n!=0)
    {
        d = n%10;
        square = d*d;
        sum = sum + square;
        n=n/10;
    }
    printf("%d",sum);
}
