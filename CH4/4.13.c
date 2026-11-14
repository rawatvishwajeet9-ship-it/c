//print sum of first n natural no 
#include<stdio.h>
int main (){
int n,sum=0;
    printf("entere a no : ");
    scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum= sum + i ;//sum+=i

}

    printf(" sum is : %d \n ",sum);

    //aslo print the no in reverse


  //we can use i because we ise i  before inside a block of for so its range its only inside is beside the block we can use it   
    for(int i=n;i >=1 ;i--){
printf("%d \n",i);
    }

    return 0;
}