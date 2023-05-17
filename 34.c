/*

       Author :  Vatsal Mangukiya
       Purpose : Array in c
       Date : 17/05/2023

       =====================What i learn??============================
         

        What is String ?
              String is a charater array which is terminated by '\0' ( NULL )
       
       Syntax:
              char str[size];
              char str[2];
       
       String in c is just a null terminated array
       
             
*/

#include<stdio.h>
void printStr(char str[])
{
       int i=0;
       while(str[i]!='\0')
       {
              printf("%c",str[i]);
              i++;
       }
}
void main(){

      char str[]={'H','e','e','\0'};
      char str[] ="harry";
       printStr(str);
//       gets(str);
//       printf("%d",sizeof(str));
//       puts(str);

}