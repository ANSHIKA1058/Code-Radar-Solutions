// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000];
    int freq[26]={0};
    fgets(str,sizeOf(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            freq[str[i]-'a']++;
        }
    }
    int maxFreq=0;
    char result ='a';
    for(int i=0;i<26;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            result = 'a'+i;
        }
    }
    printf("%c\n", result);
}