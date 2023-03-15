/*

       Author :  Vatsal Mangukiya
       Purpose : if else in c
       Date : 04/03/2023

       =====================What i learn??============================
         

         //syntax
         if(condition)
         {
              //statements

              if(condition)
              {
                   //nested if statements
              }
         }
         else if(condition)
         {
              //else statements
         }
         else
         {
              //statements

         }

*/


#include<stdio.h>

int main(){
       int age;
       printf("Enter your age: \n");
       scanf("%d",&age);
       if(age>18)
          printf("You are eligible for vote");
       else
          printf("You are not eligible for vote");
           return 0;
}