// //Q3
// #include<stdio.h>

// int main(){
//     float income,tax;
//     tax=0;
//     printf("Enter your income= ");
//     scanf("%f" , &income);
//     if(income<250000){
//         printf("No Tax");
//     }
//     else if(income>=250000 && income<500000){
//         tax=(income-250000) *0.05 ;
//         printf("Tax-%f" ,tax);
//     }
//     else if(income>=500000 && income<1000000){
//         tax=(500000-250000) *0.05 + (income-500000)*0.2;
//         printf("Tax-%f" ,tax);
//     }
//     else if(income>=1000000){
//         tax=(500000-250000) *0.05 + (1000000-500000)*0.2 + (income-1000000)*0.3;
//         printf("Tax-%f" ,tax);
//     }
//     return 0;
// }

// //Q4
// #include<stdio.h>

// int main(){
//     int year;
//     printf("Enter the year");
//     scanf("%d",&year);
//     if (year%4==0 && year%100==0 && year%400==0){
//         printf("Leap year");
//     }
//     else{
//         printf("Non-Leap");
//     }
    
//     return 0;
// }

//Q5
#include<stdio.h>

int main(){
    char ch;
    printf("Enter any character ");
    scanf("%c" ,&ch ); // referring the ASCII value
    if (ch>=97 && ch<=122){
        printf("This character is lower case");
    }
    else{
        printf("This character is upper case");
    }
    return 0;
}