#include<stdio.h>
void insert(int[],int,int,int,int);
void deletion(int[],int,int,int);
void display(int[],int);
int main()
{
	int arr[10]={10,20,30,40,60};
	int cap= sizeof arr/sizeof(arr[0]);
	int n=5;
	display(arr,n);
	int posn=2;
	int element=50;
	//insert(arr,n,posn,element,cap);
	//n+=1;
	deletion(arr,n,posn,cap);
	n-=1;
	display(arr,n);
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
void insert(int arr[],int n,int posn,int element,int cap)
{
	if(n>=cap)
	{
		printf("Array is full ");
	}
	else
	{
		for(int i=posn-1;i<cap;i++)
		{
			arr[i+1]=arr[i];
		}
		arr[posn-1]=element;
	}
}
void deletion(int arr[],int n,int posn,int cap)
{
	for(int i=posn-1;i<cap;i++)
	{
		arr[i]=arr[i+1];
	}
}

