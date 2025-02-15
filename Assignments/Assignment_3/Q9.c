#include<stdio.h>
#include<string.h>
int main(){
    char str[]="bintu";
    int ch;
    for (int i = 0; i < strlen(str); i++){
        ch=0;
        for (int j = 0; j < strlen(str); j++){
            if(str[i]==str[j]){
                ch++;
            }
        }
        printf("%s - %d\n",str[i],ch);
    }
    return 0;
}