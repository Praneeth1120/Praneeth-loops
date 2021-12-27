//to find product of odd digits in a given number
#include<stdio.h>
main()
{
	int n,d,product=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		d = n%10;
		if(d%2 != 0)
		{
			product = product*d;
		}
		n=n/10;
	}
	if(product == 1)
	{
		printf("No ODD digits");
	}
	else
	{
	printf("Product = %d",product);
    }
}
