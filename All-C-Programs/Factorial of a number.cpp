#include<stdio.h>
main()
{
	int f=1,i,a;
	printf("Enter the number  :-\t");
	scanf("%d",&a);
	printf("The factorial of the number is : ");
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	printf("%d",f);
}
