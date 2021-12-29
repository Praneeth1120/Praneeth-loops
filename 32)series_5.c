//1-2+3-4+ ... n
#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2 == 0)
		{
			sum = sum-i;
		}
		else
		{
			sum =sum +i;
		}
	}
	printf("%d",sum);
}
