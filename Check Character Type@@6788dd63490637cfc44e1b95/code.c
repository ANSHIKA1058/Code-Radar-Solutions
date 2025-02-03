#include <stdio.h>


int main() {
    char ch;
    scanf("%c",&ch);
    if (isdigit(ch)){
        printf("Digit");
    }
    else if(isalpha(ch)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || c=='u'){
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
