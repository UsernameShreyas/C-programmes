#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
}e;

int main()
{
    e.id=320;
    strcpy(e.name,"Shreyas");
    printf("Employee id= %d\n",e.id);
    printf("name= %s\n", e.name);
    printf("Size of struct Employee is %d", sizeof(e));
}
