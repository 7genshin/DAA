#include <stdio.h>
void main()
{
	int sum=0,digit,a,b;
	printf("Enter a digit\n");
	scanf("%d",&digit);
	b = digit;
	while(digit>0)
	{	
		a = digit%10;
		sum = (a*a*a)+sum;
		digit = digit/10;
	}
	if (sum==b)
		printf("It is armstrong number\n");
	else
		printf("It is not armstrong number\n");	
}
