/*
       Author :  Vatsal Mangukiya
       Purpose : Execsize solution
       Date : 25/05/2023
                     =====================What i learn??============================
       Write a code which can parse HTML to normal text
       INPUT = "<h1>hello World</h1>";
       output= "hello world";
*/
#include<stdio.h>
#include <string.h>
void parser(char * string)
{
       int in=0;
       int index=0;
       for(int i=0;i<strlen(string);i++)
       {
              if(string[i]=='<')
              {
                     in=1;
                     continue;
              }
              else if(string[i]=='>')
              {
                     in=0;
                     continue;
              }

              if(in==0)
              {
                     if(string[i]==' '&&string[i+1]==' ')
                     {
                            continue;
                     }
                     
                     string[index]=string[i];
                     index++;
              }

            
       }
       string[index]='\0';
}


int main(){
     char string[]="<h1>            This is       <span>HEllo</span> a heading             </h1>";
     parser(string);
     printf("After parsed string is ~~%s",string);
     return 0;
}