//Wrong output....Run using Online compiler
#include<stdio.h>
void insertion_sort(int *arr, int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=*(arr+i);
		j=i-1;
		while(j>=0 && (*(arr+j)>temp))
		{
			*(arr+j+1)=*(arr+j);
			j--;
		}
		*(arr+j+1)=temp;
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
 	int n = sizeof(arr)/sizeof(arr[0]);
 	insertion_sort(&arr[0],n);
 	display(arr,n);
 }
