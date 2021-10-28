#include <stdio.h>

int main(void) {
    int a,b,v,day=1;
    scanf("%d %d %d",&a,&b,&v);
    day += (v-a)/(a-b);
    if((v-a)%(a-b)!=0) day++;
    printf("%d",day);
}