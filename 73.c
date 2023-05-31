/*
       Author :  Vatsal Mangukiya
       Purpose : Callback Function
       Date : 31/05/2023
                     =====================What i learn??============================
    

     

      
*/

#include <stdio.h> 
int sum(int a,int b)
{
       return a+b;
}
void greet()
{
       printf("hello world my user good morning");
}
void greetHelloAndExecute(int (*fptr)(int,int)){
       printf("Hello Execute\n");
       printf("The sum of 5 and 7 is %d\n",fptr(5,7));
}
void greetGmAndExecute(int (*fptr)(int,int)){
       printf("Good morning");
       printf("The sum of 5 and 7 is %d\n",fptr(5,7));

}
void greetEVE(int (*fptr)(int,int),int a){
       printf("Good morning");
       printf("The sum of --  and 7 is %d\n",fptr(a,7));

}
// void greetGmAndExecute(int (*fptr)(int,int)){
//        printf("Good morning");
//        printf("The sum of 5 and 7 is %d\n",fptr(5,7));

// }
int main()
{    
       int (*ptr)(int,int);
       ptr =&sum;
       greetGmAndExecute(ptr);
       greetHelloAndExecute(ptr);
       greetEVE(ptr,5);
       return 0;
}