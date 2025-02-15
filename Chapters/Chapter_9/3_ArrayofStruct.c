#include <stdio.h>
struct employee
{
    int code;
    float sla;
    char name[100];
};
int main()
{
    struct employee facebook[100];
    struct employee instagram[100] = {100, 21.22, "Howard", 222};
    printf("%d %f %s", instagram->code, instagram->sla, instagram->name);
    // facebook[0].code=100;
    // facebook[1].code=200;
    // for(int i=0;i<2;i++){
    //     printf("%s \n",facebook[i].code);
    // }
    return 0;
}