#include<stdio.h>
void prime(int);
void prime(int num)
{
	int a,b,i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			a++;
		}
	}
	if(a!=0)
	{
		printf("Number is not prime");
	}
	else
	{
		printf("The number is prime");
	}
}
main()
{
	int a;
	printf("Enter the number :  ");
	scanf("%d",&a);
	prime(a);
}
