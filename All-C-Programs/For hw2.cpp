#include<stdio.h>
#include<math.h>
main()
{
	int i,no1=1,no2=1,n,b,c;
	float a;
	printf("Enter the number----\t");
	scanf("%d",&n);
	for(i=0;i<=n;i++);
	{
		printf("%d / %d",no1,no2);
		no1=no1+=2;
		b=pow(no1,2);
		c=(c+b);
		no2=no2++;
		a=a+(no1/no2);
	}
	printf("The sum is %.2f",a);
}
