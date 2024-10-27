#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter marks of 5 students \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }
    for (int j = 0; j < 5; j++){
        printf("Marks of student %d is %d ",j,marks[j]);
    }
    return 0;
}