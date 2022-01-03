//pointer 
#include<stdio.h>
main()
{
	int a = 4556;
	int *p;
	printf("%p",&a);
	printf("\n%d",a);
	p=&a;
	printf("\n%p",p);
	printf("\n%d",*p);
}
