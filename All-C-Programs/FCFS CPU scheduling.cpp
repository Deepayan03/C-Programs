#include<stdio.h>
#define MAX 20
main()
{
int ARRIVAL_TIME[MAX];
int SERVICE_TIME[MAX];
int START_TIME[MAX];
int FINISH_TIME[MAX];
int TURNAROUND_TIME[MAX];
float NORMALIZED_TURNAROUND_TIME[MAX];
int NUM_OF_JOBS,j;
float AVG_TURN=0.0;
printf("enter number of jobs\n");
scanf("%d",&NUM_OF_JOBS);
for(j=0;j<NUM_OF_JOBS;j++)
{
printf("enter ARRIVAL TIME of J[%d]",j+1);
scanf("%d",&ARRIVAL_TIME[j]);
printf("enter SERVICE TIME of J[%d]",j+1);
scanf("%d",&SERVICE_TIME[j]);
}
for(j=0;j<NUM_OF_JOBS;j++)
{
if(0>j-1)
START_TIME[j]=0;
else
START_TIME[j]=FINISH_TIME[j-1];
FINISH_TIME[j]=START_TIME[j]+SERVICE_TIME[j];
TURNAROUND_TIME[j]=FINISH_TIME[j]-ARRIVAL_TIME[j];
NORMALIZED_TURNAROUND_TIME[j]=(float)TURNAROUND_TIME[j]/SERVICE_TIME[j];
AVG_TURN+=TURNAROUND_TIME[j];
}
for(j=0;j<NUM_OF_JOBS;j++)
{
printf("J[%d]:\t",j+1);
printf("%d\t",ARRIVAL_TIME[j]);
printf("%d\t",SERVICE_TIME[j]);
printf("%d\t",START_TIME[j]);
printf("%d\t",FINISH_TIME[j]);
printf("%d\t",TURNAROUND_TIME[j]);
printf("%f\t",NORMALIZED_TURNAROUND_TIME[j]);
}
}
