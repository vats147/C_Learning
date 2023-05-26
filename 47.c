/*
       Author :  Vatsal Mangukiya
       Purpose : Dynamic memory allocation
       Date : 25/05/2023
                     =====================What i learn??============================
       dynamic memory allocation is allocating mememory at run time 
       there are 3 function 
       1. malloc --> memeory allocation
              ptr=(int*) malloc(sizeof(int)*n);
       2. calloc --> contigous memory allocation 
                 --> it intalizw memory with 0
              ptr=(int*) calloc(10,sizeof(int))
       3. realloc --> reallocate memory
              ptr=(int*) realloc(old_ptr,sizeof(int)*n);
       4. free --> free the memory
              free(ptr);
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
       // use of malloc
       // int *ptr;
       // int n;
       // printf("Enter the size of the array you want to create:\n");
       // scanf("%d",&n);
       // ptr = (int *)malloc(n * sizeof(int));
       // for(int i=0;i<n;i++)
       // {
       //        printf("Enter the value no %d of this array \n",i);
       //        scanf("%d",&ptr[i]);
       // }

       // for(int i=0;i<n;i++)
       // {
       //        printf("The value at %d of this address is %x array is %d \n",i,&ptr[i],ptr[i]);
       // }

       // use of calloc
       int *ptr;
       int n;
       printf("Enter the size of the array you want to create:\n");
       scanf("%d",&n);
       ptr=(int*) calloc(n,sizeof(int));
       // ptr = (int *)malloc(n * sizeof(int));
       for(int i=0;i<n;i++)
       {
              printf("Enter the value no %d of this array \n",i);
              scanf("%d",&ptr[i]);
       }

       for(int i=0;i<n;i++)
       {
              printf("The value at %d of this %x  array is %d \n",i,&ptr[i],ptr[i]);
       }

       //use of realloc
       //  int *ptr;
       // int n;
       char *pt;
       printf("Enter the New array:\n");
       scanf("%d",&n);
       pt=(char *) realloc(ptr,sizeof(char)*n);
       // ptr = (int *)malloc(n * sizeof(int));
       for(int i=0;i<n;i++)
       {
              printf("Enter the value no %d of this array \n",i);
              sscanf(pt, "%c %c %c %c %c", &pt[0], &pt[1], &pt[2], &pt[3], &pt[4]);

       }

       for(int i=0;i<n;i++)
       {
              printf("The value at %d of this %x  array is %d \n",i,&pt[i],pt[i]);
       }

        free(ptr);
       return 0;
}