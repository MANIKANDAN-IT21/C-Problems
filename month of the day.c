#include<stdio.h>

int main(){
    int num;
    char mon[15];
    printf("Enter the :");
    scanf("%d",&num);
    switch(num){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8 :
        case 12:{
            printf("day 31");
            break;
        }
        case 2: 
        {
            printf("leap");
            break;
        }
        case 4:
        case 6:
        case 9:
        case 10:{
            printf("30");
            break;
        }
        default:{
            printf("Not num");
        }
    }
    
        
   
}