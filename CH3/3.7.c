#include<stdio.h>
int main()
{
    int choice;
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("Tea");
         break;
        case 2: printf("Coffee"); 
        break;
        case 3: printf("Cold Drink");
         break;
        default: printf("Not available");
    }
}