#include <stdio.h>

int main(){
    int arr[3][2];// Means its an array of 3 rows and 2 columns
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("Enter the value of arr[%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
//For Printing 

//Statement-1
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }
//Statement-2 
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}