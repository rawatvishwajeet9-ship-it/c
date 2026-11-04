#include <stdio.h>
int main(){
    int age;
    printf("enter your age ");
    scanf("%d",&age);
//whatever value we want in input so we have to declare its type by %D or other using formet specifer 
//%d shows we are taking the integer value as a input 
//& used to store the input data into a varible 
//& is an address of an variable
//ye memory ke ander jayega aur jaha par age variable hoga vha par jakar  jo bhe input mila hoga usko varible ke ander jakar store kar dega 


    printf("age is :%d\n ",age);
    return 0; 
}
