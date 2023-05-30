
/*
       Author :  Vatsal Mangukiya
       Purpose : Command Line Argument
       Date : 30/05/2023
                     =====================What i learn??============================
    

     

      
*/

#include <stdio.h> 
#include <string.h>
int main(int argc, char const * argv[])
{    
       char str[23]="HELLo";
     for(int i=0;i<argc;i++)  
     {
       // strcat(str[i],argv[i]);
       printf("This argument at index number %d has value %s \n",i,argv[i]);
     }
     printf(str);
     printf("The value of argc is %d\n",argc);


return 0;
}