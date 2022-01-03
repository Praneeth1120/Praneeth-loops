//all prime numbers between 1 to n
#include<stdio.h>
main()
{
	int n,i,f,j;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		f=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		printf("%d\n",i);
	}
}
