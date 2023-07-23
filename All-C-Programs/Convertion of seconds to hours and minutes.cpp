#include<stdio.h>
main()
{
	int s,m,h;
	printf("Enter the value(in seconds)\n");
	scanf("%d",&s);
	m=s/60;
	h=m/60;
	printf("%d seconds = %d minutes\n",s,m);
	printf("%d seconds = %d hours",s,h);
}
