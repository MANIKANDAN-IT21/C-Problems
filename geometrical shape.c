#include<stdio.h>

int main()
{
    int choice,r,l,b,h,w;
    printf("Enter 1 for c\n");//31.4*r*r
    printf("Enter 2 for t\n");//.5*l*b
    printf("Enter 3 for r\n");//l*b
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        scanf("%d",&r);
        printf("circle :%f",31.4*r*r);
        break;
        case 2:
        scanf("%d %d",&l,&b);
        printf("Triangle :%f",.5*l*b);
        break;
        case 3:
        scanf("%d %d",&l,&w);
        printf("rectangle %d",l*w);
        break;
        default:
        printf("it is not a number");
        
    }

    
}