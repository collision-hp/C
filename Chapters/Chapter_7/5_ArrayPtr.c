#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter marks of 5 students \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }

    int* ptr = marks; //same as int* ptr = &marks[0];  It points the 1st element
    
    for (int j = 0; j < 5; j++){
        printf("Address of student %d is %d \n",j,ptr);
        printf("Marks of student %d is %d \n",j,*ptr);
        ptr++;
    }
    return 0;
}