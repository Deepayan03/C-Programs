#include <stdio.h>    
     
int main()    
{        
    int arr[5],i;     
    printf("Enter the elements:\t ");
        for(i=0;i<5;i++)
		{
			scanf("%d",&arr[i]);
		 }    
        
    int fr[5];    
    int visited = -1;    
        
    for(int i = 0; i <5; i++){    
        int count = 1;    
        for(int j = i+1; j<5; j++){    
            if(arr[i] == arr[j]){    
                count++;      
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }      
    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(int i=0; i<5; i++){    
        if(fr[i] != visited){    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", fr[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}    
