#include<stdio.h>
struct employee{
    int code;
    float sal;
    char name;
};
int main(){
    struct employee e1;
    struct employee *ptr=&e1; //ptr to structure 
    e1.code=98;
    printf("%d\n",(*ptr).code);
    printf("%d",ptr->code);//Exactly same as above code
    return 0;
}