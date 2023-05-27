/*
       Author :  Vatsal Mangukiya
       Purpose : Null pointer
       Date : 27/05/2023
                     =====================What i learn??============================
       NULL pointer is basically use when we are not been assgined any valid address
       NULL pointer is value
       void pointer is type like int

      
*/

#include <stdio.h>

int main()
{
     int a=34;
     int *ptr;
//      ptr=&a;
     if(ptr!=NULL )
       printf("The address of a is %d\n",*ptr);
     else
       printf("The pointer is null pointer ");
     return 0;
}