//sum of factorial in a given range
#include<stdio.h>
main()
{
	int a,b,fact,i,j,sum=0;
	printf("Enter a and b values : ");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact = fact * j;
		}
		sum = sum + fact;
	}
	printf("%d",sum);
}
