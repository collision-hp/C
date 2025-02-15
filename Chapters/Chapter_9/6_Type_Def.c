#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float sal;
    char name[100];
}emp;

int main(){
    emp e1; 
    emp *ptr1=&e1;

    strcpy(e1.name,"Cheeku Bhai");
    e1.sal=23.32;
    e1.code=234;
    printf("%d %f %s",ptr1->code,e1->sal,e1->name);
    printf("Your name salary and code is %s %f %d ",e1.)
    return 0;
}

//OR 

struct employee{
    char name[100];
    int code;
    float sal;
};

int main(){
    typedef struct employee emp;
    emp e1;
    e1.code=223;
    e1.sal=324.22;
    strcpy(e1.name,"King Kohli");
    printf("Your name is %s and your code and salary is %d %f ",e1.name,e1.code,e1.sal);
    return 0;

}

