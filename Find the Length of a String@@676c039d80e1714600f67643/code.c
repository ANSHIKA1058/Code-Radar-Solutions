// Your code here...#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int a = strlen(str);
    printf("%d",a);
}