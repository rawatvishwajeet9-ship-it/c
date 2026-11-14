//keep taking no as input form user intil user enters an odd number
//we prefer do while loop for this 
//our work is to input form user then check it
#include<STDIO.H>
int main (){
    int n;
do{
    printf("enter a no : ");
scanf("%d",&n);
printf(" even no  :%d \n",n);
if (n%2 !=0){
    break;
}

}
while(1);
printf("you entered an odd no type only even ");
    return 0;
}