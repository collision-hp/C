#include<stdio.h>

int main(){
    char st[30];
    printf("Enter a sentence\n");
    //Scanf cannot be used to input multi-word strings so gets is used to receive a multiword string or sentence
    
    gets(st);//entered string is stored in st

    puts(st); // Substitute of printf
    // printf("%s",st);
    printf("Terminating the program");
    return 0;
}