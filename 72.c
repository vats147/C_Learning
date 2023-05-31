/*
       Author :  Vatsal Mangukiya
       Purpose : Function Pointer
       Date : 31/05/2023
                     =====================What i learn??============================
    

     

      
*/

#include <stdio.h> 
int sum(int a,int b)
{
       return a+b;
}
void greet()
{
       printf("hello world my user good morning");
}
int main()
{    
       
       printf("The sum of 1 and 2 is %d\n",sum(1,2));
       int (*fptr) (int,int);
       fptr=&sum; 
       int d=(*fptr)(1,5);
       void (*funptr)();
       funptr=&greet;
       (*funptr)();
              // printf("The greet is ")
       printf("The value of d is %d",d);

       return 0;
}