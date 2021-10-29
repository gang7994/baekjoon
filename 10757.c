#include <stdio.h>

int main() {
    char a[10005], b[10005], result[10005]={0,};
    int n=0;
    scanf("%s %s",a,b);
    int len_a=0,len_b=0;
    for(int i=0;a[i]!='\0';i++) len_a++;
    for(int i=0;b[i]!='\0';i++) len_b++;
    int carry =0;
    while(len_a > 0 || len_b  >0) {
        int sum=0;
        if(len_a<=0 && len_b>0) sum =(b[len_b-1]-48);
        else if(len_a>0 && len_b<=0) sum =(a[len_a-1]-48);
        else sum = (a[len_a-1]-48) + (b[len_b-1]-48);
        if(carry) {
            sum++;
            carry=0;
        }
        if(sum>=10) {
            carry =1;
            result[n] = (sum-10) +48;
            
        }
        else {
            result[n] = sum + 48;
        }
        n++;
        len_a--;
        len_b--;
    }
    int len;
    if(carry) {
        len = n;
        result[len] = '1';
    }
    else len = n-1;
    for(int k = len;k>=0;k--) printf("%c",result[k]);
    
}