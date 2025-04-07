// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf(" %[^\n]", str);
    int length = strlen(str),start=0,end;
    for(int i=0;i<length;i++){
        if(str[i]==' '|| str[i]=='\0'){end=i-1;
       while(start<end){
        char temp = str[strat];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
       } 
       start = i+1;}
    }
    printf(" %s",str);
}