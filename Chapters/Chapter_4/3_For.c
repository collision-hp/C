// #include <stdio.h>
// //Square of 2 till n
// int main(){
//     int n;
//     printf("Enter n ");
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i=i*2){
//         printf("The value of i is %d \n" , i);
//     }
//     return 0;
// }



#include <stdio.h>

int main(){
    for (int i = 5; i; i--){ //  by default i will go till 1
        if (i == 5){
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter a number n");
//     scanf("%d", &n);
//     for (int i = n; i; i--){ 
//         if (i == 5){
//             break; // exit the loop
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// }