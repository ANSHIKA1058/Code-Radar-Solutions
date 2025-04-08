// Your code here...
#include <stdio.h>
int main(){
    char str[100];
    int isBinary=1;
    fgets(str,sizeof(str),stdin);
    for(int i =0;str[i]!='\0';i++){
        if(str[i]!='0' && str[i]!='1' && str[i]!='\n'){
            isBinary=0;
            break;
        }
    }
    if(isBinary){
        printf("Yes");
    }else{
        printf("No");
    }
}