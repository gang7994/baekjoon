#include <stdio.h>

int main() {
    int l,a,b,c,d;
    scanf("%d %d %d %d %d",&l,&a,&b,&c,&d);
    float korean = (float)a/c;
    float math = (float)b/d;
    if(korean != (int)korean) korean++;
    if(math != (int)math) math++;
    if(korean > math) printf("%d",l-(int)korean);
    else printf("%d",l-(int)math);
}