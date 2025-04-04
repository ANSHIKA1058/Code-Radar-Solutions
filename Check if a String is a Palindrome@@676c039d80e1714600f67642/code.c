// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char n[100];
    scanf("%[^\n]",n);
    int left =0;
    int right = strlen(n)-1;
   int is_palindrome=1;
   while(left<right){
        while(!isalnum(s[left]) && left<right) left++;
        while(!isalnum(s[left]) && left<right) right--;
        if(tolower(s[left])!=tolower(s[right])){
            is_palindrome =0;
            break;
        }
        left++;
        right--;
    }
printf(is_palindrome ? "Yes" : "No");
    
}