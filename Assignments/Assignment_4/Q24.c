#include<stdio.h>
#include<string.h>
int main(){
    char str[]="nothing";
    char *ptr1=str;
    char rev[100];
    char *ptr2=rev;
    int n=strlen(str);
    for(int i=7;i>0;i--){
        *(ptr2+n-j) = *(ptr1+j-1);
    }
    *(ptr2+n)='\0';
    printf("%s",rev);
    return 0;
}