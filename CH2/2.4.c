//operators

//relation op

#include<stdio.h>

int main (){
   printf("%d\n",4==4);//its output is 1 means true
printf("%d\n",4!=4);// 0 is an output 
printf("%d\n",4>3);
printf("%d\n",4<5);
printf("%d\n",4>=4); 

//logical op 
printf("%d",4>3 && 4>2); //and op  1
printf("%d",4>5 && 4>2);//         0
printf("%d",4>5 || 4>5);// or op   1                     
printf("%d",4>5 || 4>6);   //        0


//assignment op 
int a=1;
int b=4;
int c=a+b;
printf("%d",c);
//easy way
a+=b;
a-=b;// a=a-b

    return 0;
}