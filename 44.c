/*
       Author :  Vatsal Mangukiya
       Purpose : Execsicw
       Date : 25/05/2023
                     =====================What i learn??============================
       Travel agency 
       details of driver
       1. Name
       2. driving license no
       3. Route
       4. Kms

*/
#include<stdio.h>
#include <string.h>
struct  driver
{
       char name[12];
       char drivingliceneseno[12];
       char route[12];
       int kms;
};



int main(){
       int number=0;
       printf("Enter number ");
       scanf("%d",&number);

        struct driver d[number];
     
     return 0;
}