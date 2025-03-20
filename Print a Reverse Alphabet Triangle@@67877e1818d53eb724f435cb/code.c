// Your code here...
#include <stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=m;i>=1;i--){
        char CC = 'A';
        for(int j=1;j<=i;j++){
            printf("%c ",CC++);
        }
        printf("\n");
    }

}