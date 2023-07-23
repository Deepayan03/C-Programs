#include <stdio.h> 
int main() 
{
 int i,j,k,l; 
 printf("Enter the number of rows:\t");
scanf("%d",&l);
for(i=1;i<=l;i++) 
 {
  k=l;
	for(j=1;j<=i;j++) 
       {
         printf("%d ",k);  
         k--;
       }
  			printf("\n"); 
 }

}
