#include<stdio.h>
void swap(int,int);
void swap(int a,int b)
{
	b=a;
	printf("%d",b);
}
main()
{
	int a,b;
	a=15;
	swap(a,b);
}
