#include<stdio.h>
void square(int);
void square(int a)
{
	int c;
	c=a*a;
	printf("%d",c);
}
main()
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	square(a);
}
