// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
    int is_vowel(char c){
        c=tolower(c);
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
int main(){
    char str[1000],result[100];
    int i, j=0;
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++){
        if(!isalpha(str[i])||is_vowel(str[i])){
            result[j++]=str[i];
        }
        result[j]='\0';
       
    }
     printf("%s",result);
        return 0;
}