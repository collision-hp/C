#include<stdio.h>
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    for (int i = 1; i < 11; i++){
        printf("%4d",i*num);
    }
    printf("\n");
    for(int i=1;i<11;i++){
        printf("%4d",i);
    }
    printf("\n");
    for(int i=1;i<11;i++){
        printf("%4d",num);
    }
    return 0;
}