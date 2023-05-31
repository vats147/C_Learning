/*
       Author :  Vatsal Mangukiya
       Purpose :Area of circle using function pointer
       Date : 31/05/2023
                     =====================What i learn??============================
    

     

      
*/

#include <stdio.h> 
#include<stdlib.h>
#include <math.h>
float distance(int x1,int y1,int x2,int y2)
{
       int a=(y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
       return sqrt(a);
}
float areaOfCircle(int x1,int y1,int x2,int y2, float (*dis)(int x1,int y1,int x2,int y2))
{
       return dis(x1,y2,x2,y2);
}

int main()
{
       int x1,y1,x2,y2;
       printf("Enter value for x1\n");
       scanf("%d",&x1);
       printf("Enter value for y1\n");
       scanf("%d",&y1);
       printf("Enter value for x2\n");
       scanf("%d",&x2);
       printf("Enter value for y2\n");
       scanf("%d",&y2);

      float dst =areaOfCircle(x1,y1,x2,y2,distance);
      printf("The distance between poinsrs is %f\n",dst);
  
       return 0;
}