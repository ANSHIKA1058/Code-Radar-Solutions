// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char target;
    int count =0;
    scanf(" %[^\n]s",str);
    scanf("%c",&target);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==target){
            count++;
        }
    }
    printf("%d",count);

}