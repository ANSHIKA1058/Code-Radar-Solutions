#include <stdio.h>

int main() {
    int n,roll;
    float marks;
    char name[30];
    scanf("%d",&n);
    
    for(int i =0;i<n; i++){
        printf("%d",i+1);
        scanf("%d %s %.1f",&roll,&name,&marks);
    }
    for (int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",roll,name,marks);
    }

    
}