
#include<stdio.h>
int main(){
    int age=42;   
    int *ptr=&age;

       printf(" adress of age in rough way : %p \n",&age);
     //gives the address of age
    //gives hexadecimal formet
 
 printf("adress of age : %u \n",&age);
  //this is unsigned int convert messy addresed into good one 
 
 
 printf("value inside ptr : %u\n",ptr);

  
 printf("adress of ptr : %u\n",&ptr);
    return 0;
}
 