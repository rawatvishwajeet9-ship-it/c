//print the value of I form its pointer to pointer 
#include<stdio.h>
int main(){
int i=10;
int *ptr =&i;  //*ptr give the value of address of ptr
int **pptr =&ptr; //give the vlaue stored in ptr to i
printf("%d\n",**pptr);
return 0;
}

//* use when we want to get value
//& want to get address