// 3. Write a function to display employee data. [ Refer structure from question 1 ]

#include<stdio.h>



 struct employee
    {
       int id;
       char name[30];
       float salary;
    };

int main()
{
    struct employee E1;
    printf("Enter I'D, Name and Salary of Employee 1: \n");
    scanf("%d",&E1.id);
    fflush(stdin);
    gets(E1.name);
    scanf("%f",&E1.salary);

    display(E1);
    return 0;
}

void display(struct employee s)
{
    printf("I'D: %d\n",s.id);
    printf("Name: %s\n",s.name);
    printf("Salary: %f",s.salary);
}
