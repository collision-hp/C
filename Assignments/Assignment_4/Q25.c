#include<stdio.h>

int main(){
    int arr[]={1,2,10,4,5};
    int max=1;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d ",max);
    return 0;
}