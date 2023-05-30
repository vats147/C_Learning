


/*
       Author :  Vatsal Mangukiya
       Purpose : Command Line Argument Exercise 
       Date : 30/05/2023
                     =====================What i learn??============================
     You have to create a command line utility to add/subtract/divide/multiply two numbers
     First command line argument of your c program musy be the operation
     The next  argument being the two numbers, For example:
     >>command.c add 45 4

     

      
*/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
int main(int argc, char const * argv[])
{    
       int i=1;
       printf("argc %d",argc);
       if(atoi(argc) == 3)
       {
              if(strcmp(argv[1],"a")==0)
              {
                     printf("The Addition of %d + %d =%d ",argv[1],argv[2],atoi(argv[1]) + atoi(argv[2]));
              }
              else if(strcmp(argv[1],"s"))
              {
                     printf("The Subtraction of %d - %d =%d ",argv[1],argv[2],argv[1]-argv[2]);
              }
              else if(strcmp(argv[1],"m"))
              {
                     printf("The Addition of %d + %d =%d ",argv[1],argv[2],(atoi(argv[1] )  * atoi(argv[2])));
              }
              else if(strcmp(argv[1],"d"))
              {
                     printf("The Addition of %d + %d =%d ",argv[1],argv[2],atoi(argv[1])/atoi(argv[2]));
              }

             
       }
       else
       {
              printf("Argument Must be proer");
       }

return 0;
}