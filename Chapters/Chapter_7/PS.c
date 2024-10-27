// //Q1
// #include<stdio.h>

// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int* ptr=arr;

//     printf("The value of address %u is %d",ptr+2,*(ptr+2));
//     return 0;
// }

// Q2
// False

// //Q3
// #include<stdio.h>

// int main(){
//     int arr[11],n;
//     printf("Enter the number you want to print table of\n");
//     scanf("%d",&n);

//     for (int i = 1; i < 11; i++){
//         arr[i]=n*i;
//     }
//     for (int i = 1; i < 11; i++){
//         printf("The value of multiplication table of %d is %d\n",n,arr[i]);
//     }
//     return 0;
// }

// //Q5
// #include<stdio.h>

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++){
//         printf(" %d",arr[i]);
//     }
//     printf("\n");
// }

// /* temp=a
//  a=b
//  b=temp

//  0-5
//  1-4
//  2-3
// Total Sum=5
//  i from 0-2 i.e 0-n/2
//  arr[i] swap arr[5-i]*/

// void reverse(int arr[],int n){
//     int temp;
//     for (int i = 0; i < n/2; i++){
//         temp=arr[i];
//         arr[i]=arr[5-i];
//         arr[5-i]=temp;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     printArray(arr,6);
//     reverse (arr,6);
//     printArray(arr,6);

//     return 0;
// }

// //Q6
// #include<stdio.h>

// int count(int arr[],int n){
//     int pos=0;
//     for (int i = 0; i < n; i++){
//         if (arr[i]>0){
//             pos++;
//         }
//     }
//     return pos;

// }
// int main(){
//     int arr[8]={2,-3,-56,-352,352,-3,-342,34};
//     printf("No of Positive integers are %d",count(arr,8));
//     return 0;
// }

// // Q7
// #include <stdio.h>

// int main()
// {
//     int arr[3][10];
//     int n1, n2, n3;
//     printf("3 Numbers you want to print multiplication table of \n");
//     scanf("%d %d %d", &n1, &n2, &n3);
//     int mul[] = {n1, n2, n3};

//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 10; j++){
//             arr[i][j] = mul[i] * (j + 1);
//         }
//     }
//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 10; j++){
//             printf("Value of arr[i][j] is %d \n", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Q9
#include <stdio.h>

int main(){
    int arr[2][3][4];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                printf("%u \n",&arr[i][j][k]);
                
            }
        }
    }
    return 0;
}