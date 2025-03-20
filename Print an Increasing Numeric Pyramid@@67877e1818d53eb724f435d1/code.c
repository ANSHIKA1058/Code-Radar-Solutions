#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n=1){
        printf("1");
    }else{
    for(int i=1;i<=n;i++){
        for(int space=0;space<=n-i;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    }
}
