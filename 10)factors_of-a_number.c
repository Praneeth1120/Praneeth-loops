//factors of a number
#include<stdio.h>
main()
{
	int i=1,num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Factors are ");
	while(i<=num)
	{
		if(num%i==0)
		printf("%d ",i);
		i++;
	}
}
