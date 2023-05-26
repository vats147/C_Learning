/*
       Author :  Vatsal Mangukiya
       Purpose : Storage Class
       Date : 26/05/2023
                     =====================What i learn??============================
      Storage class
      1. automatic variables
              bydefault storage class is auto it means local variable cannot be access outside of scope
       2. extern variable
       3. stattic variable
       4. register varibles
              register int myVar=20;
              store inside register if avaiable otherwise it store as auto classs

      
*/

#include <stdio.h>
#include <stdlib.h>
#include "temp.c"
// int sum;
// int myfunction(int a,int b)
// {
//        auto int sum=a+b;
//        return sum;
// }
extern int sum;

int main()
{
       // Declaration int a; //Telling the compiler about the varibale (No space reserved)
       // Definition  int a=10; //declaration + space reservation
       // myfunction(3,5);
       printf("The sum is %d\n",sum);


       return 0;
}