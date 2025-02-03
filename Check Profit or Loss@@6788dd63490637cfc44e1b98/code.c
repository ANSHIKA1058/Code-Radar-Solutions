#include <stdio.h>


int main() {
    int cp,sp;
    scanf("%d %d",7cp,&sp);
    if(cp>sp){
        printf("Loss");
    }
    else if(cp<sp){
        printf("Profit");
    }
    else if(sp==cp){
        printf("No Profit No Loss");
    }
}