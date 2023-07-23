#include<stdio.h>
void add(int,int);
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);
}
main()
{
	int a,b;
	a=15;
	b=10;
	add(a,b);
}
