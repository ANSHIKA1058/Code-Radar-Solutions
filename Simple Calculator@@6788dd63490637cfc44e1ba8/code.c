#include <stdio.h>


int main() {
    int a,b;
    float div,sum,mul,sub;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    sum = a+b;
    mul = a*b;
    div = a/b;
    sub = a-b;

    if (b!=0){
        div = (float)a/b;
    }else{
        div =0;
    }



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
    else{
        printf("error");
    }
}

