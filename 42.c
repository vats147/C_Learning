/*
       Author :  Vatsal Mangukiya
       Purpose : Execsize
       Date : 24/05/2023
                     =====================What i learn??============================
       What is typedef ?
              change predefined varible to to userdefined type

*/
#include<stdio.h>



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