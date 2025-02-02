#include <stdio.h>


int main() {
   char ch;
   scanf("%c",&ch);
   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='o'){
    printf("Vowel");
   }
   else if(ch=='*' || ch=='/' || ch=='-' || ch=='+' || ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='&'){
    printf("Special Character");
   }
   else{
    printf("Consonant");
   }
}