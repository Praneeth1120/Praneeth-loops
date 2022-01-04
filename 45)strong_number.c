//strong number
#include<stdio.h>
main()
{
	int n,i,j,x,r,fact,sum=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	x = n;
	for(i=1;n!=0;i++)
	{
		r = n%10;
		fact=1;
		for(j=1;j<=r;j++)
		{
			fact = fact * j;
		}
		n=n/10;
		sum = sum + fact;
	}
	if(x==sum)
	{
		printf("Strong Number");
	}
	else
	{
		printf("Not a strong Number");
	}
}
