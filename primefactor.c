// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=2;num!=1;i++){
        while(num%i==0){
           num=num/i;
           printf("%d ",i);
        }
    }
}