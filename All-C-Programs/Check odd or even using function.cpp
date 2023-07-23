#include<stdio.h>
void check(int);
void check(int a)
{
	if(a%2==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
}
main()
{
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	check(a);
}
