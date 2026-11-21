#include<stdio.h>
int main(){
int age =22;
int *ptr=&age;



printf("%d \n ",age);

printf("%d \n",*ptr);

printf("%d \n",*(&age));


//all output is same
    return 0;
}