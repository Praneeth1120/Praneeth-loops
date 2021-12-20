#include<stdio.h>
main()
{
	int i=1,num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	while(i<=20)
	{
		printf("%d * %d = %d\n",i,num,i*num);
		i++;
	}
}
