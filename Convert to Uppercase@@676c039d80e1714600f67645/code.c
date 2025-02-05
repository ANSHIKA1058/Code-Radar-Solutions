#include <stdio.h>
#include <ctype.h>

int main() {
    
    char s[100];
    scanf("%s",s);
    for (int i =0; str[i] != '0';i++){
        if(s[i]>= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
    }
    printf("%s\n",s);
   
}