#include <stdio.h>


int main() {
    int a,b,sum,mul,sub;
    int div;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    sum = a+b;
    mul = a*b;
    div = a/b;
    sub = a-b;

    if(ch=='*'){
        printf("%d",mul);
    }
    else if(ch=='+'){
        printf("%d",sum);
    }
    else if(ch=='-'){
        printf("%d",sub);
    }
    else if(ch=='/'){
        if(b!=0){
        printf("%d",div);}
        else{
            printf("error");
        }
    }
}

