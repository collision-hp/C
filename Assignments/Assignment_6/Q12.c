#include<stdio.h>
int sum(int arr[],int n){
    if(n<=0){
        return 0;
    }
    return arr[n-1] + sum(arr,n-1);
}
int main(){
    int n,arr[100];
    n=4;
    printf("Enter the elements of the array");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",sum(arr,n));
    return 0;
}