#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if (isdigit(ch)){
        printf("Digit");
    }
    else if(isalpha(ch)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A'||ch=='E'||ch=='I'||ch=='O'|| ch=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special Character");
    }

}
