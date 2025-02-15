#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1,e2;
    strcpy(e1.name,"Cheeku bhai");
    e1.salary=54.4;
    e1.code=100;
    strcpy(e2.name,"Wada Bhai");
    e2.salary=45.5;
    e2.code=20;
    
    printf("%d %f %s \n",e1.code,e1.salary,e1.name);
    printf("%d %f %s \n",e2.code,e2.salary,e2.name);
    return 0;
}