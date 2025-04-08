// Your code here...
#include <stdio.h>
int main(){
    char s[1000];
    int i,found=0, count[256]={0};
    fgets(s,1000,stdin);
    for(i=0;s[i] && s[i]!='\n';i++)
    count[s[i]]++;

    for(i=0;s[i]&&s[i]!='\n';i++){
        if(count[s[i]]==1){
            printf("%c\n",s[i]);
            found=1;
            break;
        }
    }
    
}