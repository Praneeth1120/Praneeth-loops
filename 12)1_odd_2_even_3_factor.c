#include<stdio.h>
main()
{
	int i=1,n,even,odd,a;
	printf("Enter 1 for odd \nEnter 2 for even \nEnter 3 for factors\n");
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Enter 1 or 2 or 3 : ");
	scanf("%d",&a);
	if(a==1)
	{
		while(i<=n)
		{
			if(i%2 != 0)
			{
				printf("%d ",i);
			}
			i++;
		}
	}
	else if(a==2)
	{
		while(i<=n)
		{
			if(i%2 == 0)
			{
				printf("%d ",i);
			}
			i++;
		}
	}
	else if(a==3)
	{
		while(i<=n)
		{
			if(n%i==0)
			{
				printf("%d ",i);
			}
			i++;
		}
	}
	else printf("Wrong input");
}
