// Your code here...
#include <stdio.h>
int main(){
    char str[100];
    int i;
    char c;

    scanf("%[^\n]s\n",str);
    scanf("%c",&c);
    for(i=0;str[i]!='\0';i++){
        char ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            str[i]= c;
        }
    }
    printf("%s",str);
}