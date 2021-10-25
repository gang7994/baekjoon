#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    char arr[a][51];
    for(int i=0;i<a;i++) {
        scanf("%s",arr[i]);
    }
    int result[sizeof(arr[0])/sizeof(char)] = {0,};
    for(int i=0;i<a;i++) {
        for(int j=0;arr[0][j] != '\0';j++) {
            if(arr[0][j] != arr[i][j]) {
                result[j]--;      
            }
            else { 
                result[j]++;
            }
        }
    }
    for(int i =0; arr[0][i]!='\0';i++) {
        if(result[i] == a) printf("%c",arr[0][i]);
        else printf("?");
    }
}