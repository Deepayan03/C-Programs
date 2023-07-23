#include<stdio.h>
int main()
{
 int arr[]={20,10,30,40,50};
 int size=sizeof(arr)/sizeof(arr[0]);
int max=0;
int min=arr[0];
for(int i=0;i<size;i++)
{
	if(arr[i]>arr[i+1])
        {
        max=arr[i];
        }
    if(arr[i]<arr[i+1])
    {
        min=arr[i];
    }
}
printf("MAX: %d\n",max);
printf("MIN : %d",min);
}
