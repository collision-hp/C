#include<stdio.h>

int main(){
    int i=72;
    int*j=&i; // J is an integer ponter pointing to i(j storing address of i)
    // * is always found of an address
    printf("Address of i is %p\n",&i);
    printf("Value of pointer j is %p\n",j);

    printf("Address of j is %p\n",&j);

    printf("Value of i is %d\n",*j); //72
    printf("Value of address of i is %d",*&i); //72

    printf("Value of address of j is %p",*&j); // &i
    return 0;
}