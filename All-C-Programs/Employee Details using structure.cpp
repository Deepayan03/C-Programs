#include<stdio.h>
struct employee
{
char name;
int eid;
int age;
int salary;	
};
main()
{	
	struct employee e;
	printf("Enter the employee id\n");
	scanf(" %d",&e.eid);
	printf("Enter employee's age\n");
	scanf(" %d",&e.age);
	printf("Enter the salary\n");
	scanf(" %d",&e.salary);
	printf("Here are the details you have entered____\n");
	printf("The employee id: ");
	printf(" %d\n",e.eid);
	printf("The age: ");
	printf(" %d\n",e.age);
	printf("The salary of the employee: ");
	printf(" %d/month\n",e.salary);
} 
