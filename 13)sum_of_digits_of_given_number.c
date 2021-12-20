#include<stdio.h>
main()
{
	int d,n,sum=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		n=n/10;
		sum=sum+d;
	}
	printf("Sum = %d",sum);
}
