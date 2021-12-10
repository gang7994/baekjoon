#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    a += c/60;
    b += c%60;
    if(b > 59) {
        b-=60;
        a+=1;
    }
    if(a > 23) a-=24;
    printf("%d %d",a,b);

}