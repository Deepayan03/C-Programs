#include <stdio.h>
#include <string.h>

int main(void) {
	char a;
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    scanf("%c",&a);
	    if(a=='B'||a=='b')
	    {
	        printf("BattleShip");
	    }
	    else if(a=='C'||a=='c')
	    {
	        printf("Cruiser");
	    }
	    else if(a=='D'||a=='d')
	    {
	        printf("Destroyer");
	    }
	    else if(a=='F'||a=='f')
	    {
	        printf("Frigate");
	    }
	    t--;  
	}
	return 0;
}

