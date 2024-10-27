#include<stdio.h>

int main(){
    int n,rem,rev=0;
    printf("Enter a number");
    scanf("%d" ,&n);
    while (n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(n==rev){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}