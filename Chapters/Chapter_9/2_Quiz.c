#include<stdio.h>

struct employee{
    int data;
    float sal;
    char name[100];
};
int main(){
    struct employee e1;
    printf("Enter your data\n");
    scanf("%d",&e1.data);
    printf("Enter your salary\n");
    scanf("%f",&e1.sal);
    printf("Enter your name\n");
    scanf("%s",&e1.name);
    printf("Your detail are-\n");
    printf("%d %f %s",e1.data,e1.sal,e1.name);
}
