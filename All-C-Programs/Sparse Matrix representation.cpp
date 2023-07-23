#include<stdio.h>
#include<stdlib.h>
void printmatrix(int[50][50],int,int);

int main()
{
	int arr[50][50];
	int coloumns=2,rows=2,count;
	printf("Enter the number of rows and columns");
	scanf("%d%d",&rows,&coloumns);
	printf("\nEnter the matrix");
	
printmatrix(arr,rows,coloumns);
for(int i=0;i<rows;i++)
	{
		for(int j=0;j<coloumns;j++)
		{
			if(arr[i][j]==0)
			{
				count++;
			}
		}
	}
	printf("\n %d",count);	
if(count>(rows*coloumns)*2)
{
	printf("\n Matrix is a sparse matrix");
}
else
{
	printf("\n Matrix is not a sparse matrix ");
}
}
void printmatrix(int arr[50][50],int rows,int coloumns)
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<coloumns;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<coloumns;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	
}