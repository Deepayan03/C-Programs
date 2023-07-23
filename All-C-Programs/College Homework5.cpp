#include <stdio.h>
main()
{
   int i,j,k=1,l;
   printf("Enter the number of rows : ");
   scanf("%d",&l);
   for(i=1;i<=l;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d  ",k++);
	printf("\n");
   }
}
