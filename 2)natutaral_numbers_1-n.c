#include<stdio.h>
main()
{
	int i=1,num;
	printf("Enter Number : ");
	scanf("%d",&num);
	while(i<num+1)
	{
		printf("%d\n",i);
		i++;
	}
}
