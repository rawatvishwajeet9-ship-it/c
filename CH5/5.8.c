//recursion funtion example print hello 5 times 
#include<stdio.h>

void hello(int count); //naming the funtion its parameteris a

int main(){  //main fun
    int c;
        printf("Enter how many time you want to print hello : ");
    scanf("%d", &c); 

hello(c);

    return 0;
}

//recursive function
void hello(int count){
if(count == 0){
    return;
}
printf("HELLO  \n");//it call itself 
hello(count-1);       //this work like this is i enter 5 sa
                  //5-1 then  it become 4 and it will print until it become 0 
}

//this fun call itselft 