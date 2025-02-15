#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float sal;
    char name[100];
};
void show(struct employee e){
    printf("%d\n",e.code);
    printf("%f\n",e.sal);
    printf("%s\n",e.name);
}
int main(){
    struct employee e1;
    strcpy(e1.name, "Cheeku bhai");
    e1.sal = 54.4;
    e1.code = 100;
    show(e1);
}