/*
       What i learn??

      // Operators
       --> Operator is a symbol used to perform operations in given programming language

       Types of oprttors
       1. Arithmetic operator
              1.1 +
              1.2 -
              1.3 *
              1.4 /
              1.5 % --> finding a reminder
       2. Relational operators
              2.1 ==
              2.2 !=
              2.3 >
              2.4 <
              2.5 >=
              2.6 <=
       3. Logical Opertors
              3.1 && --> if both is true
              3.2 || --> if any is true
              3.3 !  --> reverse the value
       4. Bitwise opertos
              4.1 %
              4.2 |
              4.3 ^
              4.4 ~
              4.5 << //left shift opertor
              4.6 >> // Right shift operator
       5. Assginment operators
              5.1 =
              5.2 +=
              5.3 -=
              5.4 *=
              5.5 /=
       6. Miscellaneous operators
              6.1 sizeof()
              6.2 &
              6.3 *
              6.4 ?:        


*/

//size  of variable
#include<stdio.h>

int main(){

      int a;
      float b;
      a=34;
      b=6.34;

      printf("a + b = %f\n",a+b);
      printf("a - b = %f\n",a-b);
      printf("a * b = %f\n",a*b);
      printf("a / b = %f\n",a/b);

       //Relational opertor
       printf("a + b = %d\n",a==b);
      printf("a - b = %f\n",a-b);
      printf("a * b = %f\n",a*b);
      printf("a / b = %f\n",a/b);


       
       //Relational opertor
       printf("a && b = %d\n",!a&&b);
     


      return 0;
}