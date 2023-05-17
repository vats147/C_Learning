/*
       Author :  Vatsal Mangukiya
       Purpose : Sturture in c 
       Date : 17/05/2023
                     =====================What i learn??============================
       What is Sturture ?
              Stuture is user defined data type
              It is used to store differnet type of datatype

              very similar to array

       Syntax:
              struct sturture_name{
                     datatype var_name;
                     datatype var_name;
                     datatype var_name;
              };

       Description:
              String in c is just a null terminated array
*/
#include<stdio.h>
struct Student{
       int id;
       int marks;
       char fav_Char;
};

void main(){

       struct Student vatsal,ravi,shubham;
       
       vatsal.id=1;
       vatsal.marks=10;
       vatsal.fav_Char='A';
       
       ravi.id=2;
       ravi.marks=100;
       ravi.fav_Char='P';
       
       shubham.id=3;
       shubham.marks=50;
       shubham.fav_Char='K';

       printf("Vatsal Marks %d\n",vatsal.marks);
       printf("ravi Marks %d\n",ravi.marks);

       
}