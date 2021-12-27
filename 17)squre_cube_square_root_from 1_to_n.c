//find square cube square root for all numbers from 1 to n
#include<stdio.h>
#include<math.h>
main()
{
	int i=1,sq,cb,n;
	float sqr;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		sq = i*i;
		cb = i*i*i;
		sqr = sqrt(i);
		printf("for %d square : %d  cube : %d  square root : %.2f \n",i,sq,cb,sqr);
		i++;
	}
}
