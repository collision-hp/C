#include <stdio.h>

int main(){
    int a;
    printf("Enter Your marks \n");
    scanf("%d", &a);
    switch (a / 10){
    case 9:
    case 10:
        printf("Grade: A \n");
        break;
    case 8:
        printf("Grade: B \n");
        break;
    case 7:
        printf("Grade: C \n");
        break;
    case 6:
        printf("Grade: D \n");
        break;
    case 5:
        printf("Grade: E \n");
        break;
    default:
        printf("You are Fail");
    }
    return 0;
}