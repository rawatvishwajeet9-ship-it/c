//factorial of n
#include<stdio.h>
int fact(int n);
int main(){

        int c;
        printf("Enter  no : ");
    scanf("%d", &c); 
printf("factorial  is %d",fact(c));


    return 0;

}
int fact(int n){
    if(n==0){  //niche vale minus hori thi to ye base case hai agar value ye ho gyi to minus hona ruk jayega this is base case iss se niche ne jayega iss time pe value retun hogi 
        
        return 1;
    }
int factNm1=fact(n-1);// factorial 
int factN=factNm1+n;
return factN;
}