/*
       Author :  Vatsal Mangukiya
       Purpose : Dynamic memory allocation
       Date : 25/05/2023
                     =====================What i learn??============================
       Dynamic memory allocation is a way to allocate memory at the runtime
       4 segement of program
       1. Code
       2. static/global variables  data segment ( intalized data store ) Ex: Global variable value with 10 int i=10;
                                   bss  segment ( Unintalized segment ) int i;
                                   block stared by symbol
       3. Stack segment ( Local variable )
       4. Heap segment ( Dynamic memory allocation )


*/
#include<stdio.h>
#include <string.h>
#define pi 3.14


int main(){
       int number=0;
       printf("Enter number ");
       scanf("%d",&number);

        struct driver d[number];
     
     return 0;
}