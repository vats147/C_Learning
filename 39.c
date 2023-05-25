/*
       Author :  Vatsal Mangukiya
       Purpose : union
       Date : 24/05/2023

                     =====================What i learn??============================
       What is union ?
                            
       Description:
            
*/
#include<stdio.h>
#include<string.h>
// union 


union Student{
       int id;
       int marks;
       char fav_Char;
       char name[34];
};


void main(){
       union Student s1;
       s1.id=45;
       s1.marks=2;
       s1.fav_Char='h';
       strcpy(s1.name,"VATSAL");

       printf("The id is %d \n",s1.id);
       printf("The marks is %d \n",s1.marks);
       printf("The fav char is %c \n",s1.fav_Char);
       printf("The name is %s \n",s1.name);
       



      
     
}