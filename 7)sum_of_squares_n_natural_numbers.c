//sum of squares of n natural numbers
#include<stdio.h>
main()
{
	int i=1,n,sum=0,square;
	printf("Enter A Number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		square = i*i;
		sum = sum +square;
		i++;
	}
	printf("sum of squares = %d",sum);
}
