// Your code here...
#include <stdio.h>
int main(){
    char str[1000];
    int wordCount =0;
    int i=0;
    int inWord =0;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
        if(str[i]== ' ' || str[i]=='\t' || str[i]=='\n'){
            inWord =0;
        }else if(inWord==0){
            inWord =1;
            wordCount++;
        }
        i++;
    }
    printf("%d", wordCount);
    return 0;
    
}