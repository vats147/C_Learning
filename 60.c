
/*
       Author :  Vatsal Mangukiya
       Purpose : Predefined Macros & Others Pre-Processor Directives
       Date : 28/05/2023
                     =====================What i learn??============================
      



      
*/

#include <stdio.h> 

int main()
{      
       #ifdef DEBUG
              printf("Today's Date is %s\n",__DATE__);
              printf("Current  Time is %s\n",__TIME__);
              printf("File name is %s\n",__FILE__);
              printf("Line number is %d\n",__LINE__);
              printf("ANSI: %d\n",__STDC__);
       #else
              printf("HELLO WORLD");
       #endif

       return 0;
}