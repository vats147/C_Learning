/*
       Author :  Vatsal Mangukiya
       Purpose : Dangling pointer
       Date : 27/05/2023
                     =====================What i learn??============================
      Wild Pointer 
      -unitalited pointers are known as wild pointer
      Example: 
              int *ptr; //ptr is now a wild pointer
              



      
*/

#include <stdio.h>
#include<stdlib.h>



int main()
{
       int a=334;
       int *ptr; //wild pointer
       *ptr=34;
       
       printf("%d",*ptr);


       return 0;
}