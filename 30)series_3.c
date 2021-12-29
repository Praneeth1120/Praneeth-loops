//x + x/2 +x/3 +....
#include<stdio.h>
main()
{
	float x,i,n,sum=0;
	printf("Enter a Number : ");
	scanf("%f",&n);
	printf("Enter x : ");
	scanf("%f",&x);
	for(i=1;i<=n;i++)
	{
		sum = sum + (x/i);
	}
	printf("%f",sum);
}
