/*
       Author :  Vatsal Mangukiya
       Purpose : Dynamic memory allocation excersize
       Date : 25/05/2023
                     =====================What i learn??============================
       Dynamic memory allocation 

       ABC private ltd
       Employee Id can be of any length and it can contain any charter.
       do for 3 employeee
       
       Then reallocation

       input: length of employee id in integer variable



       
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
       int no_of_employee=3;
       char *ptr;
       while(no_of_employee--)
       {
              int n;
              printf("How many length of employee id you want to store");
              scanf("%d",&n);
              ptr=(char *) malloc(sizeof(char)*(n+1));
              printf("Enter your employee id\n");
              scanf("%s",ptr);
              printf("Your employee id is %s\n",ptr);
              free(ptr);
       }



       return 0;
}