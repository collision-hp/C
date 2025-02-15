#include<stdio.h>
void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={64,25,36,92,12};
    printf("Original array");
    printarr(arr,5);
    selectionsort(arr,5);
    printarr(arr,5);
    return 0;
}
