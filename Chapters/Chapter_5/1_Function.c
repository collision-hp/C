#include<stdio.h>

int sum(int a,int b){ //Parameter
    printf("The sum is %d \n",a+b);
    return a+b;
}
int main(){
    int a1=32;//argument
    int b1=32;//argument
    sum(a1,b1);

    int c=sum(a1,b1);
    printf("%d",c);
    return 0;
}

