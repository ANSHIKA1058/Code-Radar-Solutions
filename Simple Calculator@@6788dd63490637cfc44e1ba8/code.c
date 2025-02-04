#include <stdio.h>


int main() {
    int a,b,res;
    char ch;
    if(scanf("%d %d %c",&a,&b,&ch)!=3){
        printf("error\n");
    }
    switch (ch){
        case '+':
        res = a+b;
        printf("%d\n",res);
        break;
        case '-':
        res = a-b;
        printf("%d\n",res);
        case '*':
        res = a*b;
        printf("%d\n",res);
        case '/':
        if(b==0){
            printf("error\n");
            }else{
                printf("%d\n",a/b);
            }
        break;
        default:
        printf("error\n");
        break;
    }
    return 0;
  

}

