#include<stdio.h>
void insertionsort(int[],int);
void display(int[],int);
void insertionsort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<=a[j])
		{
			a[j+1]=a[j];
			j--;
			for(int k=0;k<i;k++)
			{
				printf("%5d",a[i]);
			}
			printf("\n");
		a[j+1]=temp;
		}
		
	}
 } 
 void display(int a[],int n)
 {
 	int i,j;
 	for(i=0;i<n;i++)
 	{
 		printf("%d  ",a[i]);
	 }
 }
 int main()
 {
 	int arr[20];
 	int n;
 	printf("\nEnter the size of the array\n");
 	scanf("%d",&n);
 	printf("Enter the elements\n");
 	for(int i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);	
	}
	insertionsort(arr,n);
	display(arr,n);
 }
