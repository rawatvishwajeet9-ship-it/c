//table of any no 

#include<stdio.h>
void printtable(int a);
int main (){
    int n;

printf("enter  no : ");
scanf("%d",&n);
printtable(n);  //whenver we call our fun and pass our varialbe so the variable we are passing is khown as argument or actual parameter
return 0;

}
void printtable(int a){ //and here the variable comes is khown as parameter
 for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",a,i,a*i);
    }

}