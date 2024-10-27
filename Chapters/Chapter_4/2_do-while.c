// //Executed atleast once

// #include<stdio.h>

// int main(){
//     int i=0; 
//     //Do executed first
//     do{
//         printf("The value of i is %d \n", i);
//         i++;
//     }
//     //then the while condition is checked
//     while(i<0);
    
//     return 0;
// }


#include<stdio.h>

int main(){
    int n, i=0;
    printf("Enter a limit");
    scanf("%d",&n);
    do{
        printf("%d \n", i);
        i++;
    }
    while(i<=n);
    return 0;
}