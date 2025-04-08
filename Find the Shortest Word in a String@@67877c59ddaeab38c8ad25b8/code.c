// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[200],word[50],shortest[50];
    int i=0,j=0,min =999;
    fgets(str,sizeof(str),stdin);
    while(1){
        if(str[i]!=' '&& str[i]!='\n' && str[i]!='\0'){
            word[j++]=str[i];
        }else{
            word[j]='\0';
            if(j>0 && j<min){
                min =j;
                strcpy(shortest,word);
            }
            j=0;
        }
        if (str[i]=='\0')break;
        i++;
    }
    printf("%s",shortest);
}