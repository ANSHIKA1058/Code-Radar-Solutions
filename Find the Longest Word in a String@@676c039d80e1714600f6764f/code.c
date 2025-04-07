// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000],word[100],longest[100];
    int i=0,j=0,max=0;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
        if(str[i]!=' ' && str[i] !='\n'){
            word[j++]=str[i];
        }else{
            word[j]='\0';
            if(j>max){
                max=j;
                for(int k=0;k<=j;k++){
                    longest[k]=word[k];
                }
            }
            j=0;
        }
        i++;
    }
    word[j] = '\0';
    if(j > max){
        max = j;
        for(int k = 0; k <= j; k++){
            longest[k] = word[k];
        }
    }
    printf("%s",longest);
}
