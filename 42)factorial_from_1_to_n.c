//factorial from 1 to n
#include<stdio.h>
main()
{
	int i,j,n,f;
	printf("Enter number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f = j*f;
		}
			printf("%d\n",f);
	}
}
