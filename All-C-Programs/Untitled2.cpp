#include<stdio.h>
#include<math.h>
main()
{
	int a,n,c=0,x,i,b,d=1;
	printf("Enter the value of x :-\t");
	scanf("%d",&x);
	printf("Enter the number of terms :-\t");
	scanf("%d",&n);
	c=x;
	printf("The values of the series are :-\n");
	for(i=1;i<n;i++)
	{
		a=(d+=2);
		b=pow(x,a);
		printf("%d\n",b);
		c=c+b;
	}
	printf("\nThe sum is %d",c);
}
