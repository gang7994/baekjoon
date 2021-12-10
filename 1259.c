#include <stdio.h>
#include <string.h>

int palindrome(char str[]){
    int len = strlen(str);
    int low = 0;
    int high = len-1;
    while(1) {
        if(low >=high) break;
        if(str[low] != str[high]) return 0;
        low++;
        high--;
    }
    return 1;
}

int main() {
    char str[100000];
    while(1) {
        scanf("%s",str);
        if(str[0]=='0' && strlen(str)==1) break;
        if(palindrome(str)) printf("yes\n");
        else printf("no\n");
    }
}