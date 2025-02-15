#include<stdio.h>
int binary(int arr[],int low,int high,int x){
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            mid=low+1;
        }
        else{
            mid=high-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,10,40};
    int x=10;
    int result=binary(arr,0,5,x);
    printf("%d",result);
    return 0;
}