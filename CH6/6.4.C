#include<stdio.h>
int main(){
int x;   
int *ptr;

ptr=&x;    //address of x is stored in ptr
*ptr=0;    //0 go and save in the x becauese ptr store the address of x
           //and it saves the vlaue in x


printf("x =%d\n",x);   //0
printf("*ptr =%d\n",*ptr);   //0

*ptr +=5;
printf("x =%d\n",x);
printf("*ptr =%d\n",*ptr);  

(*ptr)++;  //*ptr=*ptr +1  mean x=x+1 so x=6
printf("x =%d\n",x);
printf("*ptr =%d\n",*ptr);  

return 0;
}