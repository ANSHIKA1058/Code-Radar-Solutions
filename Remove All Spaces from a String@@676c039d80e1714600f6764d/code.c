// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000];
    char result[1000];
    int j=0;
    fgets(str, sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]1=' '){
            result[j]=str[i];
            j++;
        }
    }
    result[j]='\0';
    printf("%s",result);
    return 0;
}

