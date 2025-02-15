#include<stdio.h>
#include<math.h>
int main(){
    int m=153;
    int n=m;
    float sum=0;
    int last=0;
    while(n!=0){
        last=n%10;
        sum+=pow(last,3);
        n/=10;
    }
    if(sum==m){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
}