/* 
	1
	2  4
	3  6  9
	4  8 12 16
	5 10 15 20 25
	6 12 18 24 30 36
	.
	.
	. 
	10 20 30 40 50 . . . . .100            */
	
#include<stdio.h>
main()
{
	int i,j,product;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
			product = i*j;
			printf("%3d ",product);
		}
		printf("\n");
	}	
}	
