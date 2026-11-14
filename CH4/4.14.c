//print sum of first n natural no  and print these no in rev in easy way

#include<stdio.h>
int main (){
int n,sum=0;
    printf("entere a no : ");
    scanf("%d",&n);
for(int i=1, j=n ; i<=n && j>=1 ; i++ , j--){
    sum= sum + i ;
    printf("%d \n",j);

}

    printf(" sum is : %d \n ",sum);


 

    return 0;
}