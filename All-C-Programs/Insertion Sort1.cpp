#include<stdio.h>
void insertionsort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
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
 	int arr[]={ 50 , 80 , 45 , 78 , 65};
 	int n = sizeof(arr)/sizeof (arr[0]);
 	insertionsort(arr,n);
 	display(arr,n);
 }
