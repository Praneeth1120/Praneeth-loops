//Binary number to decimal number 

#include<stdio.h>
#include<math.h>
main()
{
	int n,i,sum=0,r;
	printf("Enter the Binary Number : ");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		r=n%10;
		sum= sum +r*pow(2,i);
		n=n/10;
	}
	printf("Decimal Number : %d",sum);
}
