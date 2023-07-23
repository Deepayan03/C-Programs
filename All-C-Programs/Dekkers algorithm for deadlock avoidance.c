#include<stdio.h>
int FLAG[1];
int TURN=1;
int main()
{
while(1)
{
procedure_0();
procedure_1();
procedure_1();
return;
}
}
procedure_0()
{
FLAG[0]=1;
while(FLAG[1]);

if(TURN==1)
{
FLAG[0]=0;
while(TURN==1)
{
return;
}
FLAG[0]=1;
}
}
printf("CRITICAL SECTION:= P0\n");
TURN=1;
FLAG[0]=0;
}
procedure_1()
{
FLAG[1]=1;
while(FLAG[0])
{
if(TURN==0)
{
FLAG[1]=0;
while(TURN==0)
{
return; } FLAG[1]=1;
}
}
printf("CRITICAL SECTION:= P1\n");
TURN=0;
FLAG[1]=0;
}
