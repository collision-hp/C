#include<stdio.h>
typedef struct complex{
    float real;
    float imag;
}comp;
int main(){
    comp c1={.real=54,.imag=87};
    comp c2={.real=43,.imag=95};
    
    comp sum;
    sum.real=c1.real+c2.real;
    sum.imag=c1.imag+c2.imag;

    printf("%.2f+%.2fi ",sum.real,sum.imag);
    return 0;
}