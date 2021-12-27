//fibonacci series upto n
#include<stdio.h>
main()
{
	int a=0,b=1,c=0,n;
	printf("Enter n : ");
	scanf("%d",&n);
	printf(" %d %d",a,b);
	while(c<n)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;
	}
}
