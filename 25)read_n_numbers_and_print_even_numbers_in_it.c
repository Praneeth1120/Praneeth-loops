//Read n numbers and print even numbers in it
#include<stdio.h>
main()
{
	int n,num,i=1;
	printf("enter n : ");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&num);
		if(num%2 == 0)
		{
			printf("%d",num);
		}
		i++;
	}
}
