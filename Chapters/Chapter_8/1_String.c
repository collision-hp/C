#include<stdio.h>

int main(){
    char st[]={'a','b','d','\0'};
    int length;
    length= sizeof(st)/sizeof(st[0]);
    printf("%d\n",length);
    //Same as above
    char str[]="abd"; //here no need to terminate by null character it's done by default in double court
    for (int i = 0; i < 3; i++){
        printf("Character is %c\n",st[i]);
    }
    return 0;
}