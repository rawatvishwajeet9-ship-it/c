//print the factorial of a no n 
#include<stdio.h>
int main (){
 int n;
 printf("enter no : ");
 scanf("%d",&n);
 int fact=1;
 for(int i=1;i<=n;i++){
    fact=fact*i;

 }

    printf("factorial : %d",fact);

    return 0;

}