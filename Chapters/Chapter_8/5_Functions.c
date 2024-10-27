#include<stdio.h>
#include<string.h>
int main(){
    char st[]="Howard";

    //To print length of a string
    printf("%d\n",strlen(st)); 
    
    //to copy one string to another variable
    char target[30];
    strcpy(target,st);
    printf("%s %s\n",st,target);
    
    //concatinating two strings 
    char st1[]=" University";
    strcat(st,st1); // st1 concatinates in st
    printf("%s\n",st);

    //Comparing two strings 
    int a=strcmp("Far","Joke"); //if 1st element comes 1st in the dictionary then it prints negative
    printf("%d\n",a);
    


    return 0;
}