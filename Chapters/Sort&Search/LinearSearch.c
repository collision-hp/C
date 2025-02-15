#include<stdio.h>
int linear(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if (x==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,4,6,23,45,75};
    int x=23;
    int result=linear(arr,6,x);
    printf("%d",result);
    return 0;
}