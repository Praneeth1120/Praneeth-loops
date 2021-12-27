//print all uppercase and lowercase alphabets
#include<stdio.h>
main()
{
	char ch=65,c=97;
	printf("All the Uppercase Letters : ");
	while(ch<=90)
	{
		printf("%c ",ch);
		ch++;
	}
	printf("\nAll the Lowercase Letters : ");
	while(c<=122)
	{
		printf("%c ",c);
		c++;	
	}
}
