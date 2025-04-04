// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
char str[50];
scanf("%[^\n]s",str);
int vowels =0;
for(int i=0;str[i]!='\0';i++){
    char str = tolower(str[i]);
    if(str == 'a' || str =='e' || str=='i' ||str=='o' ||str=="u"){
        vowels++;
    }
    printf("%d",vowels);
}
}