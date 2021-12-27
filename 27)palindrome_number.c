//check whether a number is even palindrome or not
#include<stdio.h>
main()
{
	int n,y,d,reverse=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	y=n;
	while(n>0)
	{
		d=n%10;
		reverse = reverse*10 +d;
		n=n/10;	
	}
	if(reverse == y)
	{
		printf("It is Palindrome Number");
	}
	else
	printf("It is not Palindrome Number");
}
