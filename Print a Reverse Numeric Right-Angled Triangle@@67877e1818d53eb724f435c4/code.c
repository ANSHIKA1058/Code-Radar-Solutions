// Your code here...
#include <stdio.h>
int main(){
    int n,space,i,j;
    scanf("%d",&n);
    for(i=n-1;i>=1;i--){
        for(space=1;space<=n;space++){
            printf(" ");
        }
        for(j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}