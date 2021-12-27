//read x and y and calculate x to the power 
#include<stdio.h>
main()
{
	int x,y,i=1,power=1;
	printf("Enter X : ");
	scanf("%d",&x);
	printf("Enter Y : ");
	scanf("%d",&y);
	while(i<=y)
	{
		power = power * x;
		i++;
	}
	printf("%d",power);
}
