//conditional statements 
//two type 
//1 if esle 2 switch 

# include<stdio.h>
int main (){
    int age;
    printf("enter age : ");
    scanf("%d",&age);
    if (age>18){
        printf("adult\n");
        printf("also can drive a car ");
    }
    else{
        printf("teenager\n");
    }
    return 0;
}