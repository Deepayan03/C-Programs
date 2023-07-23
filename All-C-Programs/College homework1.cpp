#include<stdio.h>  
main()
{    
int n,i,m=0,f=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("The number is not a prime number");    
f=1;    
break;    
}    
}    
if(f==0)    
printf("The number is a prime number");       
}    
