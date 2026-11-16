//w a f that prints namaste if user is indian and bonjour if the user is french
#include<stdio.h>
void namaste();
void bonjour();
int main (){
    char n;
printf("enter 'i' for indian and 'f' for french: ");
scanf("%c",&n);
if(n=='i'){
    namaste();
}
else{
    bonjour();
}
    return 0;

}

void namaste(){
    printf("namaste jiiiiiiii :)\n");
}
void bonjour(){
    printf("bonjour\n");
}