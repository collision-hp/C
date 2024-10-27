// //Q1
// #include<stdio.h>

// int main(){
//     int n , mul;
//     printf("Enter a number to print multiplication number of");
//     scanf("%d",&n);
//     for (int i = 1; i <= 10; i++){
//         mul=n*i;
//         printf("%d X %d = %d \n" ,n,i,mul);
//     }
    
//     return 0;
// }

// //Q2
// #include<stdio.h>

// int main(){
//     int n , mul;
//     printf("Enter n");
//     scanf("%d" ,&n);
//     for (int i = 10; i ; i--){
//         mul=n*i;
//         printf("%d X %d = %d" ,n,i,mul);
//     }
//     return 0;
// }

// //Q5
// #include<stdio.h>

// int main(){
//     int n=1;
//     int sum=0;
//     while(n<11){
//         sum+=n;
//         n++;
//     }
//     printf("Sum of first 10 natural numbers is- %d \n",sum);
//     return 0;
// }

//Q6
// #include<stdio.h>

// int main(){
//     int sum=0;
//     for(int i=1;i<11;i++){
//         sum+=i;
//     }
//     printf("The sum of first 10 natural numbers is %d \n ",sum);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int sum=0;
//     int i=1;
//     do{
//         sum+=i;
//         i++;
//     }
//     while(i<11);
//     printf("The sum of 1st 10 natural numbers is %d \n",sum);
//     return 0;
// }

// //Q7
// #include<stdio.h>

// int main(){
//     int mul=1;
//     int sum=0;
//     for (int i = 1; i < 11; i++){
//         mul=8*i;
//         printf("8 X %d = %d \n",i ,mul); 
//         sum+=mul;   
//     }
//     printf("%d \n",sum);
    
//     return 0;
// }

// //Q8
// #include<stdio.h>

// int main(){
//     int fact=1,n;
//     printf("Enter a number");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++){
//         fact*=i;
//     }
//     printf("Fact of the entered number is %d" ,fact);
    
//     return 0;
// }

// //Q9
// #include<stdio.h>

// int main(){
//     int i=1,n;
//     int fact=1;
//     printf("Enter a number");
//     scanf("%d",&n);
//     while(i<=n){
//         fact*=i;
//         i++;
//     }
//     printf("The fact of number n is %d \n ",fact);
//     return 0;
// }

//Q10
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for (int i = 2; i < n; i++){
        if (n%i==0){
            printf("Not prime");break;
        }
        else{
            printf("Prime");break;
        }
    }
    return 0;
}

//Q11
#include<stdio.h>

int main(){
    int i=2;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<n){
        if (n%i==0){
            printf("Not Prime");break;
        }
        else{
            printf("Prime");break;
        }
    }
    return 0;
}
