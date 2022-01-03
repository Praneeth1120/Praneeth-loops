//prime number using for loop in a different way
#include<stdio.h>
main()
{
	int i,n,f=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			f=f+1;
		}
	}
	if(f==1)
	printf("Prime number");
	else
	printf("Not a Prime number");
}
