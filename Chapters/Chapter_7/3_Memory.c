#include <stdio.h>

int main(){
    int arr[3] = {1, 2, 3}; // 1 integer = 4 bytes
    //This will reserve 4 x 3 = 12 bytes in memory (4 bytes for each integer).
    for (int i = 0; i < 3; i++){
        printf("%p \n", &arr[i]);
    }
/*  
    0061FF10 
    0061FF14 
    0061FF18

    4 bytes gap between 2 consequetive memory address;
*/
    return 0;
}