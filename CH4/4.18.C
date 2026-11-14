//keep taking no as input from user until user enters a no which is multiple of 7


#include<STDIO.H>
int main (){
    int n;
do{
    printf("enter a no : ");
scanf("%d",&n);
printf("not a multiple of 7 hehe  :%d \n",n);
if (n%7 ==0){
    break;
}

}
while(1);
printf("you enterd a no which is multiple of 7 noob \n  ");
printf(" "); 
    return 0;
}