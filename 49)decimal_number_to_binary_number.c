//decimal number to binary number

#include<stdio.h>
#include<math.h>
main()
{
	int n,i,sum=0,r;
	printf("Enter the decimal Number : ");
	scanf("%d",&n);
	for(i=1;n!=0;i=i*10)
	{
		r=n%2;
		sum=sum+r*i;
		n=n/2;
	}
	printf("binary Number : %d",sum);
}
