#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubble(int arr[],int n){
    int swapped=0;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped=1;
            }
        }
        if (swapped==0){
            break;
        } 
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={884,72,12,43,29,79};
    bubble(arr,6);
    printarr(arr,6);
    return 0;
}