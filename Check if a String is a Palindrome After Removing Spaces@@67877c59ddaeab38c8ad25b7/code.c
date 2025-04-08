// Your code here...
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char str[100],cleanStr[100];
    int len,j=0,isPalindrome=1;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '&& str[i]!='\n'){
            cleanStr[j++]=str[i];
        }
    }
    cleanStr[j]='\0';
    len = strlen(cleanStr);
    for(int i=0;i<len/2;i++){
        if(cleanStr[i]!=cleanStr[len-1-i]){
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome){
        printf("Yes");
    }else{
        printf("No");
    }
    }
