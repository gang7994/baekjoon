#include <stdio.h>
#include <string.h>
int main(){
    char n[1001]={0,};
    scanf("%s",n);
    
    int len = strlen(n)+4;
    int number[len];
    for(int i =0;i<len;i++) {
        number[i] = n[i]-48;
        if(number[i] < 0) number[i] = 0;
    }
    int result[len+1];
    result[0] = 0;
    for(int i=1;i<=len;i++) {
        
        if(i<5) result[i] =  number[i-1];
        else if(i>=5 && i<=len-4) result[i] = number[i-1] + number[i-5];
        else result[i] = number[i-5];
    }

    for(int i=len;i>=0;i--) {
        if(result[i] == 2) {
            result[i] = 0;
            result[i-1]+=1;
        }
        else if(result[i] == 3) {
            result[i] = 1;
            result[i-1] += 1;
        }
    }
    
    for(int i=0;i<=len;i++) {
        if(i==0 && result[0] == 0) ;
        else if(result[0] == 0 && result[1]== 0) { 
            printf("0");
            break;
        }
        else printf("%d",result[i]);
    }
}