//wap to check your grade 
#include<stdio.h>
int main () {
int marks;
printf("enter marks");
scanf("%d",&marks);


if(marks<30){
    printf("C GRADE\n");
}
else if(marks>=30 && marks < 70){
    printf("B \n");
}
else if(marks>=70 && marks < 90){
    printf("A  GRADE\n");
}
else if(marks>=90 && marks<100){
    printf("A+++  GRADE\n");
}
else {
    printf("wrong marks");
}

}