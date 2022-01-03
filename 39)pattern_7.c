/*
   1 2 3  4...10
   2 4 6  8...20
   3 6 9 12...30
   4
   .
   .
   .
  10 20 30 40..100   */

#include<stdio.h>
main()
{
	int i,j,sum=0;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			sum = sum +i;
			printf("%3d ",sum);
		}
		printf("\n");
		sum = 0;
	}
}
