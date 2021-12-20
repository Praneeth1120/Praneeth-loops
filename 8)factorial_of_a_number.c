//Factorial of a number
#include<stdio.h>
main()
{
	int i=1,num,factorial=1;
	printf("Enter a Number : ");
	scanf("%d",&num);
	while(i<=num)
	{
		factorial = factorial * i;
		i++;
	}
	printf("Factorial is %d",factorial);
}
