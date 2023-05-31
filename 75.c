/*
       Author :  Vatsal Mangukiya
       Purpose : Memory Leak
       Date : 31/05/2023
                     =====================What i learn??============================
    

     

      
*/

#include <stdio.h> 
#include <stdlib.h>
int main()
{    
      int a,i=0;
      int *i2;
      while (i<4555)
      {
              printf("Welcome to :\n");
              i2=malloc(23332*sizeof(int));
              // if(i%100==0)
              // {
              //        getchar();
              // }
              // i++;
              free(i2);
      }
      
       return 0;
}