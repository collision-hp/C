#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a); // %d denotes integer value, & operator is the "address-of" operator
    //means store an integer value in the address of a
    printf("The value of a is %d", a);

    char c;
    scanf("%c", &c);
    printf("The value of c is %c", c);

    float f;
    scanf("%f", &f);
    printf("The value of f is %f", f);
    return 0 ;
}

