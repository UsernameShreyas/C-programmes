//Recursions in C
//VVImportant

#include<stdio.h>

int factorial(int number)
{
    if(number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return(number*factorial(number-1));
    }
}

int main()
{
    int num;
   printf("Enter the number you want factorial of: \n");
   scanf("%d",&num);
   printf("the Factorial of %d is %d",num,factorial(num));
   return 0;

}