#include <stdio.h>
#include <stdlib.h>
int FLAG[1];
int TURN = 1;
void procedure_0()
{
    FLAG[0] = 1;
    while (FLAG[1]&&TURN==1)
    {
            FLAG[0] = 0;
            while (TURN == 1);
            FLAG[0] = 1;
    }
    printf("Critical section:- P0\n");
    TURN = 1;
    FLAG[0] = 0;
}
void procedure_1()
{
    while (FLAG[1]&&TURN == 1)
    {
            FLAG[1] = 0;
            while (TURN == 0);
            FLAG[1] = 1;
    }
    printf("Critical section:- P1\n");
    TURN = 0;
    FLAG[1] = 0;
}

int main()
{
    while (1)
    {
        procedure_0();
        procedure_1();
        procedure_1();

        exit(0);
    }
}