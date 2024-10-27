//Q- Write a program to convert all the vowels in a string to capital letters and print the string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *ptr;
    int n;
    printf("Enter the number of words you want to enter\n");
    scanf("%d",&n);
    getchar();
    ptr=(char*)malloc(n*sizeof(char));
    printf("Enter the string\n");
    // fgets(ptr,n+1,stdin);//n+1 as null is stored at the end
    gets(ptr);
    for(int i=0;ptr[i]!=0;i++){
        if(ptr[i]=='a' || ptr[i]=='e' || ptr[i]=='i' || ptr[i]=='o' || ptr[i]=='u'){
            ptr[i]-=32;
        }
    }
    puts(ptr);
    free(ptr);
    return 0;
}