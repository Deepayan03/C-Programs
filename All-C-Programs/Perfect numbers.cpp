#include<stdio.h>
   int main(){
                    int sum=0,p,i,n;
                    printf("\n Perfect numbers are\n: ");
                    printf("Enter the range:-");
                    scanf("%d",&n);
                    for(i= 1; i<= 100; i++){
                    p=1;
                    while(p<=(i/2)){
                    if(i % p == 0)
                    sum=sum+p;
                    p++;
                    }
                    if(sum==i)
                    printf(" %d ",i);
                    sum=0;
                    }
                    return 0;
                    }
