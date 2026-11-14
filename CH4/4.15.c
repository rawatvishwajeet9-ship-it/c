//print the table of a no input by the user
#include<stdio.h>
int main()
{
    int n;
    printf("entere a no for table  : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }

    return 0;
}