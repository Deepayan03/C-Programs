#include<stdio.h>
#include<stdlib.h>
int flag[2];
int turn=1;
void procedure0()
{
	flag[0]=1;
	while(flag[1]&&turn==0)
	{
		turn=0;
		while(turn==1);
		flag[0]=1;
	}
	printf("Critical section is P1\n");
	turn=1;
	flag[0]=0;
}
void procedure1()
{
	flag[0]=1;
	while(flag[1]&&turn==1)
	{
		turn=1;
		while(turn==0);
		flag[1]=1;
	}
	printf("Critical section is P2\n");
	turn=0;
	flag[1]=0;
}
int main()
{
	procedure0();
	procedure1();
	procedure1();
}