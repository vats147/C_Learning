/*
       What i learn??

       Variable --> A name given to a memory location
       Rules of Defining Variable
             1. can contain alphabets, digits, underscors(_)
             2. A variable name can start with an alphabets and underscore only
                EX: Allow ✅
                     int a;
                     int hello;
                     int _Employee_Name;
                     int FirstName123;
                    
                    Don't Allow ❌
                     int 9;
                     float #%*#;
                     int hello@;

       //Data Types 
       
       1. Basic Data Type: int,char,float,double
       2. Derived Data Type: array, structure, union, pointer
       3. Enumeration Data Type: enum
       4. Void Data Type: void

       Constant 

*/

//size  of variable
#include<stdio.h>

int main(){
       //sizeof() is use for find size of any datatype
       //sizeof(int) --> output is 4
       printf("%lu",sizeof());
}