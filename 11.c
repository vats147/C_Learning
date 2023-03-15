/*

       Author :  Vatsal Mangukiya
       Purpose : switch case in c
       Date : 15/03/2023

       =====================What i learn??============================
         

         //syntax
         switch(condition || variable)
         {
              case:
                     break;
              case 1:
                     break;
              //default if no condition is true then it run defualt
              default:
                     //no need to write break
                     break;
                     
       }

*/


#include<stdio.h>

int main(){
       int age;
       printf("Enter your age: \n");
       scanf("%d",&age);
       switch (age)
       {
       case 3:
              printf("The age is 3");
              break;

       
       default: 
              printf("The age is not 3");
              break;
       }
}