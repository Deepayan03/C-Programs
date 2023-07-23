#include<stdio.h>
int FORK_SEMA[4]={1};
int ROOM_SEMA=4;
int i;

main()
{
philospher(0);
philospher(1);
philospher(2);
philospher(3);
philospher(4);
}
philospher(i)
{
printf("__THINK__[%d]\n",i);
ROOM_SEMA-=1;
FORK_SEMA[i]-=1;
FORK_SEMA[(i+1)%5]-=1;
printf("___EAT___[%d]\n",i);
FORK_SEMA[(i+1)%5]+=1;
FORK_SEMA[i]+=1;
ROOM_SEMA+=1;
}
