#include<stdio.h>
#define PAGE_MAX_SIZE 20
#define FRAME_MAX_SIZE 5
int show[FRAME_MAX_SIZE][PAGE_MAX_SIZE];
int count;
int PAGE_ADDRESS[PAGE_MAX_SIZE]={0};
int FRAME_ALLOC[FRAME_MAX_SIZE]={0};
int PAGE_SIZE;
int FRAME_SIZE;
int INDEX=0;
int i,j,m;
main()
{
printf("enter size of PAGE ADDRESS STREAM:=");
scanf("%d",&PAGE_SIZE);
printf("Enter size of FRAME:=");
scanf("%d",&FRAME_SIZE);
printf("\nenter page address stream\n");
for(i=0;i<PAGE_SIZE;i++)
scanf("%d",&PAGE_ADDRESS[i]);
for(i=0;i<PAGE_SIZE;i++)
{
if(check(PAGE_ADDRESS[i]))
continue;
if(FRAME_SIZE<(INDEX+1))
12
INDEX=0;
FRAME_ALLOC[INDEX]=PAGE_ADDRESS[i];
for(m=i;m<PAGE_SIZE;m++)
show[INDEX][m]=PAGE_ADDRESS[i];
count++;
INDEX++;
}
for(i=0;i<FRAME_SIZE;i++)
{
for(j=0;j<PAGE_SIZE;j++)
printf("%d",show[i][j]);
printf("\n");
}
}
int check(int x)
{
for(j=0;j<FRAME_SIZE;j++)
{
if(FRAME_ALLOC[j]==x)
INDEX=0;
FRAME_ALLOC[INDEX]=PAGE_ADDRESS[i];
for(m=i;m<PAGE_SIZE;m++)
show[INDEX][m]=PAGE_ADDRESS[i];
count++;
INDEX++;
13
}
for(i=0;i<FRAME_SIZE;i++)
{
for(j=0;j<PAGE_SIZE;j++)
printf("%d",show[i][j]);
}
