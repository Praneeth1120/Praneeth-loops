// 1/x^0 + 1/x^1  + 1/x^2 + .....
#include<stdio.h>
#include<math.h>
main()
{
	float n,i,sum=0,x;
	printf("Enter a Number : ");
	scanf("%f",&n);
	printf("Enter x : ");
	scanf("%f",&x);
	for(i=0;i<=n;i++)
	{
		sum = sum +(1/pow(x,i));
	}
	printf("%f",sum);
}
