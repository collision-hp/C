// //Q1
// #include<stdio.h>

// int main(){
//     int a=12;
//     int* b=&a;
//     printf("Address of variable%p",b);
//     printf("Value of the variable is %d",*b);
//     return 0;
// }

// //Q2
// #include<stdio.h>
// int ret_5(int* j){
//     printf("The value of ptr is %p\n",j);
//     printf("The value at ptr is %d",*j);
// }
// int main(){
//     int i=78;
//     int* j=&i;
//     printf("The address of i is %p\n",&i);
//     ret_5(j);

//     return 0;
// }

// //Q3
// #include<stdio.h>
// int change(int* t){
//     *t= *t * 10;
//     return *t;
// }
// int main(){
//     int a=2; //copy of the variable is passed to the function
//     printf("Value of 2 is %d\n",a);
//     printf("The changed value is %u\n",change(&a));
//     return 0;
// }


// //Q4
// #include<stdio.h>
// void modif(int* arr,int size){
//     for (int i = 0; i < size; i++){
//         arr[i]=arr[i]*2;
//     }
// }
//     /*
//     -sizeof(arr) gives the total size in bytes of the array.
//     -sizeof(arr[0]) gives the size of one element (in this case, an integer).
//     -Dividing the total size by the size of one element gives the number of elements in the array
//     */
// int main(){
//     int arr[]={1,2,3,4,5};
//     int length=sizeof(arr)/sizeof(arr[0]);
//     printf("%d\n",length);
//     printf("Before modification\n");
//     for (int i = 0; i < length; i++){
//         printf("%d\t",arr[i]);
//     }
//     modif(arr,length); // Arrays by default decay into pointers when passed into functions SO no need to write &arr
//     printf("\nAfter modification\n");
//     for (int i = 0; i < length; i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }

// //Q5
// #include<stdio.h>
// void sumavg(int* a,int* b){
//     printf("The sum of the numbers is %d\n",*a+*b);
//     printf("The avg of the 2 numbers is %d\n",(*a+*b)/2);
// }
// int main(){
//     int a=12;
//     int b=2;
//     sumavg(&a,&b);
//     return 0;
// }

//Q6
#include<stdio.h>

int main(){
    int i=2;
    int* ptr1=&i;
    int** ptr2=&ptr1;
    printf("The address of i is %d",ptr1);
    printf("The value of i is %d",*ptr1);
    printf("The value of i is %d",**ptr2);
    return 0;
}


