// Your code here...
#include <stdio.h>

int main() {
    int N;
   
    scanf("%d", &N);

    for (int i = 0; i <= N; i++) {
        char currentChar = 'A';
        for (int j = 1 ;j <= i; j++) {
            printf("%c ", currentChar++);
        }
        printf("\n");
    }

    return 0;
}
