#include <stdio.h>
#include <string.h>
int main(void) {
    int n=0,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        char str[101]={0,};
        scanf("%s",str);
        char check[101]={0,};
        int num=0;
        int result = 1;
        for(int j=0;str[j]!='\0';j++) {
            if(strlen(str)==1) {
                break;
            }
            for(int k=0;check[k]!='\0';k++) {
                if(check[k]==str[j]) {
                    result=0;
                    break;
                }
            }
            if(str[j]!=str[j+1]) {
                check[num] = str[j];
                num++;
            }
        }
        if(result ==1) cnt++;
    }
    printf("%d",cnt);
}