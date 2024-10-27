#include<stdio.h>

int main(){
    int marks[90]; 
    marks[0]=45;
    marks[1]=342;
    printf("Marks value is %d %d \n",marks[1], marks[0]);
    int cgpa[5]={2,3,4,5,6};
    for (int i = 0; i < 5; i++){
        printf("%d ",cgpa[i]);
    }
    return 0;
}