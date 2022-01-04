/* sum of series
	S = x + x^2/2! +x^3/3! + x^4/4! + ....
	*/
#include<stdio.h>
#include<math.h>
main()
{
	int n,x,i,fact=1;
	float sum=0;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter x : ");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		fact = fact *i;
		sum = sum + (pow(x,i)/fact);
	}
	printf("%f",sum);
}
