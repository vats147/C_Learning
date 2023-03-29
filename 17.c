/*

       Author :  Vatsal Mangukiya
       Purpose : if else in c
       Date : 29/03/2023

       =====================What i learn??============================
         

         GOTO statement

*/

#include<stdio.h>

void main(){

       printf("Hello WOrld");
       if(1)
       {
              printf("before continue\n");
              goto label;
              printf("after continue\n");
       }

       label: printf("after if statemtnt\n") ;    
       printf("after ok");
}