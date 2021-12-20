#include<stdio.h>
main()
{
	int i=1,a,b;
	printf("Enter values of a and b : ");
	scanf("%d%d",&a,&b);
	a=a+1;
	while(a<b)
	{
		if(a%2==0)
		{
		printf("%d\n",a);
		}
		a++;
	}
}
