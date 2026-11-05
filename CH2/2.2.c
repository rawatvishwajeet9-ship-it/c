//arithmetic instruction
#include<stdio.h>
#include<math.h> //header file for pow funtion 
int main (){
    int a =4;
    int b=2;
     int sum = a + b ;

       int mult = a * b ;

  int sub = a - b ;

    int div = a / b ;

      int mod = a % b ;

      int power =pow(a,b);

      printf("%d",power);
      
      //these are oparator 
      //for power  a=pow(b,c);
    return 0;
}