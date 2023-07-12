// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]

#include<stdio.h>

struct employee
    {
       int id;
       char name[30];
       float salary;
    };

struct employee input();
void display(struct employee);
int main()
{

    struct employee E1;
    E1=input();
    display(E1);
    return 0;
}

struct employee input()
{
    struct employee a;
    printf("Enter I'D: ");
    scanf("%d",&a.id);
    fflush(stdin);
    printf("Enter Name: ");
    gets(a.name);
    printf("Enter Salary: ");
    scanf("%f",&a.salary);

    return a;
}

void display(struct employee b)
{
    printf("-----Displaying-----\n");
    printf("I'd: %d.  Name: %s.  Salary: %f. ",b.id,b.name,b.salary);
}