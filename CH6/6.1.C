//POINTER 

#include<stdio.h>
int main(){
    int age=42;        //here me make a varialbe of age named its value is 42
    int *ptr=&age;      // ptr stores the memory address of age
    int _age=*ptr;     //if we want to access the value which is stored in the memory locatin that is stored by ptr so we make a 
                       //new var and  take out pointer value and put into _age

    printf("%d ",_age);
    return 0;
}
 