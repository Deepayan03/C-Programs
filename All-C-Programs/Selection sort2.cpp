#include<stdio.h>
void selectionsort(int[],int);
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
 	int arr[]={ 50 , 80 , 45 , 78 , 65};
 	int n = sizeof(arr)/sizeof (arr[0]);
 	selectionsort(arr,n);
 	display(arr,n);
 }
 void selectionsort(int arr[],int n)
 {
 	int i,j,minindex,temp;
 	for(i=0;i<n;i++)
 	{
 		minindex=i;
 		for(j=i+1;j<n;j++)
 		{
 			if(arr[j]<arr[minindex])
 			{
 				minindex=j;
			}
			temp=arr[i];
			arr[i]=arr[minindex];
			arr[minindex]=temp;
		 }
	 }
 }
