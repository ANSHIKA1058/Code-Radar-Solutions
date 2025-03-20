// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){
            printf(" ");
        }
         char CC='A';
        for(int j =1;j<=i;j++){
           printf("%c",CC++);
        }
        printf("\n");
    }
}