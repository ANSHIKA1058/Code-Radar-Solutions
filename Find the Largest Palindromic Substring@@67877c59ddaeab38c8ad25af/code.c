// Your code here...
#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, len = 0;
    int maxLen = 0, startIndex = 0;
    scanf("%s",str);
    while(str[len]!='\0'){
        len++;
    }
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            int isPalindrome =1;
            for(k=0;k<=(j-i)/2;k++){
                if(str[i+k]!=str[j-k]){
                    isPalindrome=0;
                    break;
                }
            }
        
    if(isPalindrome && (j-i+1)>maxLen){
        maxLen=j-i+1;
        startIndex=i;
    }}
}
for(i=startIndex;i<startIndex+maxLen;i++){
    printf("%c",str[i]);
}
printf("\n");}