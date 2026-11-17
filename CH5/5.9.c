//sum of 1st n natural no 
#include<stdio.h>
int sum(int n);
int main(){

        int c;
        printf("Enter  no : ");
    scanf("%d", &c); 
printf("sum is %d",sum(c));


    return 0;

}
int sum(int n){
    if(n==1){
        return 1;
    }
int sumNm1=sum(n-1);// sum of 1 to n
int sumN=sumNm1+n;
return sumN;
}