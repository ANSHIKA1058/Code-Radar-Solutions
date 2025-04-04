// Your code here...
#include <stdio.h>
#include <ctype.h>

int main(){
char str[100];
scanf("%[^\n]s",str);
int vowels =0;
for(int i=0;str[i]!='\0';i++){
    char str = tolower(str[i]);
    if(str == 'a' || str =='e' || str=='i' ||str=='o' ||str=='u'){
        vowels++;
    }
    printf("%d",vowels);
}
}