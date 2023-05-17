/*
       Author :  Vatsal Mangukiya
       Purpose : Typedef
       Date : 17/05/2023
                     =====================What i learn??============================
       What is typedef ?
              change predefined varible to to userdefined type


       Syntax:
              char str[size];
              char str[2];
              
       Description:
              String in c is just a null terminated array
*/
#include<stdio.h>
// typedef struct  st;


typedef struct Student{
       int id;
       int marks;
       char fav_Char;
}stu;

void main(){
       stu s1;
       s1.id=45;
      
       printf("%d",s1.id);
}