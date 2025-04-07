// Your code here...
#include <stdio.h>
int main(){
    char str[1000];
    char oldChar, newChar;
    fgets(str,sizeof(str),stdin);
    scanf(" %c", &oldChar);
    scanf(" %c", &newChar);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==oldChar){
            str[i]=newChar;
        }
    }
    printf("%s",str);
}