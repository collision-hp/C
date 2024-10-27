#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:-");
    scanf("%d" ,&age);
    if(age>60){
        printf("Senior Citizen");
    }
    else if(age>=18){
        printf("You are eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}


