// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf(" %[^\n]s",str1);
    scanf(" %[^\n]s",str2);
    printf("%s",strcat(str1,str2));

}