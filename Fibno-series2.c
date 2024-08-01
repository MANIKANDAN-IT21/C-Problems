// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int num=64;
   int a=0;
   int b=1;
   int sum=0;
   int count=0;
   int arr[1000];

for(sum=0;sum<num;sum++){
     sum=a+b;
     a=b;
     b=sum;
     printf("%d ",sum);
     arr[count]=sum;
     count++;
}
printf("\n"); 
for(int i=count-2;i>=0;i--){
    if(arr[i]<=num){
        printf("%d ",arr[i]);
        num=num-arr[i];
    }
}
}