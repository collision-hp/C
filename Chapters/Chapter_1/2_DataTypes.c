#include<stdio.h>
int main(){
    //this is data tpye class
    int a=1;
    float f=1.8;
    char ch='H';
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(ch));
    return 0;
}