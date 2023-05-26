/*
       Author :  Vatsal Mangukiya
       Purpose : Void pointer
       Date : 26/05/2023
                     =====================What i learn??============================
       

      
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
       int a=345;
       float b=23;
       void *ptr;
       ptr=&b;
       //* ( int *) ptr typecasting to integerpointer
       printf("The value of a is %f",* (float *) ptr);

       return 0;
}