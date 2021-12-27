//palindrome number
#include<stdio.h>
main()
{
	int n,x,reverse=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	int num = n;
	while(n>0)
	{
		x=n%10;
		reverse=reverse*10+x;
		n=n/10;
	}
	if(reverse == num)
	{
		printf("Palindrome number");
	}
	else 
	{
		printf("Not a Palindrome Number");
	}
}
