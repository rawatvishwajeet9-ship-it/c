
//basic code for sum of 2 no with funtion 

#include<stdio.h>
int sum(int a,int b);
int main (){
    int a,b;

printf("enter 1st no : ");
scanf("%d",&a);
printf("enter 2nd no : ");
scanf("%d",&b);
int s=sum(a,b);
printf("%d",s);
return 0;

}
int sum(int x,int y) {
    return x+y;
}