//product of digits of given number
#include<stdio.h>
main()
{
	int n,x,product=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		product = product * x;
		n = n/10;	
	}
	printf("%d",product);
}
