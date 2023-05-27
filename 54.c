/*
       Author :  Vatsal Mangukiya
       Purpose : Dangling pointer
       Date : 27/05/2023
                     =====================What i learn??============================
      Dangling means hanging 
      Dangling pointer is a pointer which is point to that memory location which is free or relase by the program


      
*/

#include <stdio.h>
#include<stdlib.h>

int* myfunc()
{
       int a=10;
       return &a;
}

int main()
{
       // Case 1: Deallocation of memory
       int *ptr=(int *) malloc(sizeof(int)*7);
       ptr[0]=34;
       ptr[1]=35;
       ptr[2]=36;
       ptr[3]=37;
       free(ptr); //ptr is now a danglinf pointer
       printf("ptr address is %d",ptr);

       // Case 2: function returning local variable address
       int *ptr2= myfuc();

       // Case 3: If a variable goes out of scope
       int *dangptr3;
       {      
              int a=10;
              dangptr3=&a;
       }
       // dangptr3 is now dangling pointer 


     return 0;
}