//sum of factors
#include<stdio.h>
main()
{
	int i=1,num,sum=0;
	printf("Enter a number :");
	scanf("%d",&num);
	while(i<=num)
	{
		if(num%i==0)
		{
			sum = sum + i;
		}
		i++;
	}
	printf("Sum of factors = %d",sum);
}
