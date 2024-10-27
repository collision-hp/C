#include<stdio.h>

int main(){
    char i='A';
    char* j=&i; //j is a character pointer

    float f=5.326;
    float* k=&f;


    printf("The address of i is %p",&i);
    printf("Value of i is %d" ,*j);
    printf("Value of i is %d" ,*&i);
    printf("The address of f is %p",&f);
    return 0;
}