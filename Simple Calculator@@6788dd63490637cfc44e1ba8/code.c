#include <stdio.h>


int main() {
    int a,b,sum,div,mul,sub;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    if(ch=='*'){
        mul = a*b;
        printf("%d",mul);
    }
    else if(ch=='+'){
        sum = a+b;
        printf("%d",sum);
    }
    else if(ch=='-'){
        sub=a-b;
        printf("%d",sub);
    }
    else if(ch=='/'){
        div = a/b;
        printf("%d",div);
    }
}

