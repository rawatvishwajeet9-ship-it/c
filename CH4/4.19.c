//continue statement 

#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i=i+1){
if(i==6){
    continue; 
    //skip 6 and move to next iteration 
    //it is used to skip 
}

    printf("%d \n",i);
    }


    return 0;
}