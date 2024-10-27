#include<stdio.h>

int main(){
    /*Increment Operation increments the value of ptr by as much bytes as the variable is of. 
    Ex- int is of 4 bytes so adress incremented by 4 bytes 
      - char is of 1 byte so address is incremented by 1 byte 
      - same applies for decrement operation
    */

    // int a=5;
    // int* ptr=&a;
    // printf("The address of a is %u\n",ptr);
    // ptr++; 
    // ptr--;
    // printf("The value of updated ptr is %u",ptr);

    char a='A';
    char* ptr=&a;
    printf("The address of a is %u\n",ptr);
    ptr+=1;
    ptr-=1;
    printf("The value of updated ptr is %u",ptr);
    return 0;
}