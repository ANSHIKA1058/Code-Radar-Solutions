#include <stdio.h>


int main() {
    int a,b,res;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    switch (ch){
        case '+':
        res = a+b;
        printf("%d\n",res);
        break;

        case '-':
        res = a-b;
        printf("%d\n",res);
        break;

        case '*':
        res = a*b;
        printf("%d\n",res);
        break;
        
        case '/':
        if(b==0){
            printf("error\n");
            }
            else if(a%b==0){
                printf("%d",a/b);
            }
        break;
        default:
        printf("error\n");
        break;
    }

}

