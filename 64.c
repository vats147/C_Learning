
/*
       Author :  Vatsal Mangukiya
       Purpose : File I/O function
       Date : 29/05/2023
                     =====================What i learn??============================
       fopen() ==> Opening a file
             
             filepath, mode
       fopen("filepath.txt","w");

     

      
*/

#include <stdio.h> 

int main()
{      
       FILE *ptr=NULL;
       char string[15]="This is vatsal";
       // ptr=fopen("myfile.txt","r");
       // fscanf(ptr,"%s",string);
       // printf("The content of this file has %s\n",string);

       // **************Writing a ffile *************
       ptr=fopen("myfile.txt","a");
       printf("%d",sizeof(string));
       fprintf(ptr,"%s",string);

       return 0;
}