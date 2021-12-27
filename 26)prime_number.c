//Check whether a number is prime or not.
#include<stdio.h>
main()
{
	int n,i=1,fact=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			fact++;
		}
	i++;
	}
	if(fact == 2)
	{
		printf("Prime Number");
	}
	else
	printf("Not a Prime Number");
}
