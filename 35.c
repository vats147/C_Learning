/*
       Author :  Vatsal Mangukiya
       Purpose : String function
       Date : 17/05/2023
                            =====================What i learn??============================
       What are string function ?
              there are servel function in string.h
              strlen()      --> length of string
              strrev()      --> reverse string
              strcmp()      --> compare string if both match then it will return 0
              strcpy()      --> copy string
              strcat()      --> concatinate string
              strlwr()      --> convert string to lower case

       
       Description:
              
*/
#include<stdio.h>
#include<string.h>
void main(){
       char Str1[]="Hello";
       char Str2[]="World";
       char Str3[54];
     //  puts(strcat(Str1,Str2));
       printf("Length of s1 is  %d\n",strlen(Str1));
       printf("Length of s1 is  %d\n",strlen(Str2));
       printf("The reverse  of s1 is  %s\n",strrev(Str1));
       strcpy(Str3,strcat(Str1,Str2));
       puts(Str3);


}