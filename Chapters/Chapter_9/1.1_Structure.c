#include<stdio.h>

typedef struct employee{
    int code;
    float sal;
}emp;

int main(){
    emp e1={.code=2121, .sal=211.222}; 
    printf("%d %f",e1.code,e1.sal);
    return 0;
}