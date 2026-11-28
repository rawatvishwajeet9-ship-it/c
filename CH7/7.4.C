#include<stdio.h>
int main(){
int age =34;
int *ptr =&age;
printf("ptr before = %u\n",ptr);
ptr++;
printf("ptr after inchrement= %u\n",ptr);
ptr++;
printf("ptr after dechrement= %u\n",ptr);
return 0;
}
