// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int size=4;
    int arr[4][4];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<size;i++){
        int k=0;
        for(int j=0;j<size;j++){
            if(arr[i][j]==arr[i+k][j+k]){
                arr[i][j]=0;
            }
            k++;
        }
    }
    int flag=0;
      for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i][j]!=arr[i][j])
            flag=0;
            else
            flag=1;
        }
    }
    if(flag==1)
    printf("yes");
    else
    printf("No");
}