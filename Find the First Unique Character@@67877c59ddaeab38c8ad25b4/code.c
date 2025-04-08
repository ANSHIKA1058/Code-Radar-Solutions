// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int freq[256]={0};

    int i;
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){

        freq[(unsigned char)str[i]]++;
    }
    for(i=0;str[i]!='\0';i++){
        if(freq[(unsigned char)str[i]]==1 && str[i]!='\n'){
            printf("%c",str[i]);
            return 0;
        }
    }
}