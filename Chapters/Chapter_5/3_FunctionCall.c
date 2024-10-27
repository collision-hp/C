#include<stdio.h>

    int change(int a,int b){
        a=99; // No change
        b=72;
        int sum=a+b;
        printf("%d",sum);
    }
int main(){
    int a=33;
    int b=22;
    change(a,b); 
    return 0;
}