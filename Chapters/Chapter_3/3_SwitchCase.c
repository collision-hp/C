#include<stdio.h>
int main(){
    int a=6;
    printf("Enter A \n");
    scanf("%d" , &a);

    switch(a){
        case 1:
        printf("You entered 1 \n"); break;
        case 2:
        printf("You entered 2 \n"); break;
        case 3:
        printf("You entered 3 \n"); break;
        default :
        printf("No matches Found");
    }
    return 0;
}