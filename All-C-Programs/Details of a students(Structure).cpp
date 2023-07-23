#include<stdio.h>
struct Student
{
char name;
int sid;
int clas;
int roll;	
};
main()
{	
	struct Student e;
	printf("Enter the Student id\n");
	scanf(" %d",&e.sid);
	printf("Enter the class\n");
	scanf(" %d",&e.clas);
	printf("Enter the roll no\n");
	scanf(" %d",&e.roll);
	printf("Here are the details you have entered____\n");
	printf("The Student id: ");
	printf(" %d\n",e.sid);
	printf("The class is: ");
	printf(" %d\n",e.clas);
	printf("The roll number of the student is: ");
	printf(" %d\n",e.roll);
} 
