// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100];
    scanf(" %[^\n]s",str);
    int length = strlen(str);
    for(int i=0;i<length/2;i++){
        char temp = str[i];
        str[i]=str[length-i-1];
        str[length -1-i]=temp;
    }
    printf("%s",str);
}