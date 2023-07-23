#include<stdio.h>
void bubblesort(int[],int);
void display(int[],int);
int main()
{
	int arr[10]={10,30,20,50,40,70,60,90,80,100};
	int n=10;
	display(arr,n);
	bubblesort(arr,n);
	printf("\n");
	display(arr,n);	
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void bubblesort(int arr[],int n)
{
	int flag,temp;
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j] >arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			flag=1;
		}
		if(flag==1)
		break;
	}
}