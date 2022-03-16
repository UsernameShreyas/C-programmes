#include <stdio.h>              //Header File   
#include <stdlib.h>             //Header File
struct Employee
{
    int id;
    char name[50];
    float salary;
}e[10];

int main()
{
   struct Employee *ptr;
   int i, n;

   printf("Enter the number of Employee : ");
   scanf("%d", &n);

                                                                    // allocating memory for n numbers of struct person
   ptr = (struct Employee*) malloc(n * sizeof(struct Employee));

   for(i = 0; i < n; ++i)
   {
       printf("Enter Name and Id and Salary respectively: ");
       scanf("%s %d %f", (ptr+i)->name, &(ptr+i)->id , &(ptr+i)->salary);
   }

   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
       printf("Name: %s\t Id: %d\n Salary: %f\n", (ptr+i)->name, (ptr+i)->id , (ptr+i)->salary);

   return 0;
}
