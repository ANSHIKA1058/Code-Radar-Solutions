#include <stdio.h> 

int main() {
    int a,s;
    scanf("%d %d",&a,&s);
    if(s==1){
        if(a>=18){
            printf("Eligible");
            }
            else{
                printf("Not Eligible");
            }
    }
    else{
        printf("Not Eligible");
    }
    
}