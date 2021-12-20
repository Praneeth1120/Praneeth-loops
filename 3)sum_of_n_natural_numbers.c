#include<stdio.h>
main()
{
	int i=1,num,sum=0;
	printf("Enter Number : ");
	scanf("%d",&num);
	while(i<num+1)
	{
		sum = sum+i;
		i++;
	}
	printf("Sum = %d",sum);
}
