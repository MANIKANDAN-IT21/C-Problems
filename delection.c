#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int loc=2;
    int arr[size];
    for(int i=0;i<size;scanf("%d",&arr[i++]));
    for(int i=loc-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}