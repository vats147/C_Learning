/*

       Author :  Vatsal Mangukiya
       Purpose : Array in c
       Date : 30/03/2023

       =====================What i learn??============================
         

        What is array ?
              array is collection of data which may have same datatype
       
       Syntax:
              data_type name[size];
       
       Disadvantage 
              poor time complexity of insertion and deletion operation
              waste of memeory because array is fixed size
              you need contigous memory
              you can not increase size of array after intalize
*/

#include<stdio.h>

void main(){

       int marks[4]={0,10,13,21};
       
       printf("Marks of student 3 is %d",marks[2]);

}