#include <stdio.h>
#include<string.h>
struct student {
    char name[50];
    int roll;
    int marks;
} s1,s2,s3;

int main() {
    printf("Enter information of students:\n");

        printf("Enter roll number,\n", s1.roll);
        scanf("%d",&s1.roll);
        printf("Enter first name: ");
        scanf("%s",s1.name);
        printf("Enter marks: ");
        scanf("%d",&s1.marks);
    printf("Displaying Information:\n\n");
        printf("\nRoll number: %d\n",s1.roll);
        printf("First name: ");
        puts(s1.name);
        printf("Marks: %d", s1.marks);
}

