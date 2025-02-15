#include<stdio.h>

int main(){
    int a,b,c,d,max;
    int *ap=&a;
    *ap=55;
    int *bp=&b;
    *bp=105;
    int *cp=&c;
    *cp=89;
    int *dp=&d;
    *dp=68;
    int arr[]={a,b,c,d};
    // printf("%d\n",a);
    // printf("%d\n",b);
    // printf("%d\n",c);
    // printf("%d\n",d);
    int *maxvar=&max;
    *maxvar=1;
    for(int i=0;i<4;i++){
        if(arr[i]>*maxvar){
            *maxvar=arr[i];
        }
    }
    printf("%d ",*maxvar);
    return 0;
}