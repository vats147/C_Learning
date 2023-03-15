/*
       What i learn??

       // formate specifiers , constants , escape sequance

   ==>    formate specifiers is a way to tell compiler what type of data is in a varibale
       1. %d --> integer
       2. %f --> float
       3. %c --> char
       4. %lf --> double
       5. %l --> long
       6. %lf  --> long double

       %a.bf --> a is use for total charter 
                 b is use for decimal point

==> constants is  a value that never change
        
        in c  there is two way to define constant
        1. const keyword
              const int a=5;
       2. #define keyword
              #define pi 3.14
==> escape sequances
       \n --> new line
       \t --> tab
       \b --> backspace
       \r --> carriage return
       \f --> form feed
       \v --> vertical tab
       \a --> alert
       \0 --> null
       \? --> question mark
       \\ --> backslash
       \' --> single quote
       \" --> double quote
       \ooo --> octal number
       \xhh --> hexadecimal number

==> comments
       // single line comment
       /*  this is a multiline comment*  /
*/

//size  of variable
#include<stdio.h>
#define pi 3.14
int main(){

       const int a=4;
       
       float b=7.333;

       printf("hello world %f\n",pi);

       printf("The value of a is  %d and the value of b is %10.4f \n",a,b);


       return 0;
}