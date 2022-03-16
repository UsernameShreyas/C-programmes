#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
}e[10];

void read(struct Employee[] , int );
void display(struct Employee[] , int );

int main()
{
    int n;
    printf("Enter the number of Employees :\n");
    scanf("%d",&n);
    read(e,n);
    display(e,n);
}

void read(struct Employee e[], int n)
{
    int i;
    printf("\nEnter the Employee Details in order of :\n Id:\n Name:\n Salary:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%f",&e[i].id,&e[i].name,&e[i].salary);
    }
}

void display(struct Employee e[], int n)
{
    int i;
    printf("\n The Details of the Employee are as Follows :\n");
    for(i=0;i<n;i++)
    {
        printf("\nThe Id of The Employee is %d\n",e[i].id);
        printf("\nThe Name of the employee is %s\n",e[i].name);
        printf("\nThe Salary of the Employee is %f\n",e[i].salary);
    }
}
