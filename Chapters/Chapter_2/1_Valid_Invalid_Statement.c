#include <stdio.h>

int main()
{
    /*
     Valid
     int j=1;
     int a=2,b=3,c=4,d=5;
     int j1=a+j-i;
     int a,b,c,d,g;
     a=b=c=d=g=30;

      Invalid
      float s=b+2;
    */

    int b = 3;
    int d = 5;
    int c = b * d;
    printf("The value of c is %d", c);
    return 0;
}