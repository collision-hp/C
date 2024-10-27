#include<stdio.h>

int main(){
    int i = 8;
    int* j = &i;
    int** k = &j;

    // *& cancels eachother

    printf("The value of i is %d",i);
    printf("The value of j is %d",*j);
    printf("The value of address of i is %d",*&i);
    printf("The value of address of j is %d",*&j);
    printf("The value of value of address of j is %d",**&j);
    printf("The value of i is %d",i);
    return 0;
}