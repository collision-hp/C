#include<stdio.h>
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x = 3;
    int y = 4;
    swap(&x,&y);
    printf("%d , %d",x,y);
    return 0;
}