#include<stdio.h>
int fact(int n){
    if (n==1 || n==0){ //Base condition
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int a=5;
    printf("The factorial of a is %d",fact(a));
    return 0;
}