#include <stdio.h>

int main(void) {
    char arr[1000001] = {0,};
    int cnt =0;
    int i;
    gets(arr);
    for(i=0;arr[i]!='\0';i++) {
        if(arr[i] == ' ') cnt++; 
    }
    if((arr[0]==' ') && (arr[i-1]!=' ')) printf("%d",cnt);
    else if((arr[0]!=' ') && (arr[i-1]==' ')) printf("%d",cnt);
    else if((arr[0]== ' ') && (arr[i-1]==' ')) printf("%d",cnt-1);
    else printf("%d",cnt+1);    
}