// //Q1
// #include<stdio.h>
// int average(int a,int b,int c){
//     int avg=(a+b+c)/3;
//     return printf("Average of 3 numbers is %d",avg);
// }
// int main(){
//     average(3,2,1);
//     return 0;
// }

// //Q3
// #include<stdio.h>
// float force(int m){
//     float g=9.8;
//     float f=m*g;
//     return f;
// }
// int main(){
//     int m=2;
//     printf("The force of the ojbect is %f",force(m));
//     return 0;
// }

// //Q4
// /*
//   FIBONACCI SERIES- 0 ,1 ,1 ,2 ,3 ,5 ,8 ,13 ,21 ,34....
//   next element is the sum of previous 2 elements. 
//   fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
// */
// #include<stdio.h>

// int fibonacci(int n){
//     if (n==1 || n==2){
//         return n-1;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }
// int main(){
//     int n=6;
//     printf("The value of fibonacci series is %d",fibonacci(n));
//     return 0;
// }

// //Q5
// #include<stdio.h>

// int main(){
//     int a = 4;
//     printf("%d %d %d \n", a, ++a, a++);
//     // Right to left evaluation in printf
//     return 0;
// }

// //Q6

// #include<stdio.h>

//     int sum(int n){
//         if (n==1){
//             return 1;
//         }
//         return sum(n-1) + n;
//     }
// int main(){
//     int n=5;
//     printf("The sum of 1st n natural numbers is %d" , sum(n));
//     return 0;
// }

//Q7
#include<stdio.h>
/*
    *
    * * *
    * * * * *
    i=1 1 star
    i=2 3 star
    i=3 5 star
    2n-1 pattern
*/
int main(){
    int n=3;
    for (int i = 1; i <= n; i++){ //for i
        for (int j = 1; j <= 2*i-1; j++){ // for respective stars
            printf("*");
        }
        printf("\n"); // prints new line
    }
    return 0;
}