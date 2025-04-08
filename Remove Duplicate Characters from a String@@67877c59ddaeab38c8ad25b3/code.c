// Your code here...
#include <stdio.h>
int main(){
    char str[100];
    int i,j,k;
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++){
        for(j=i+1;str[j]!='\0'){
            if(str[i]==str[j]){
                for(k=j;str[k]!='\0';k++){
                    str[k]=str[k+1];
                }
            }else{
                j++;
            }
        }
    }printf("%s",str);
}