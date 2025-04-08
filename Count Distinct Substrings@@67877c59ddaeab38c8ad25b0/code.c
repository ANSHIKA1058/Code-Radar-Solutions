// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[100],substr[1000][100];
    int i,j,k,l,len=0,count=0,isDuplicate;
    scanf("%s",str);
    while(str[len]!='\0'){
        len++;
    }
    for(i=0;i<len;i++){
        for(j=1;j<=len-i;j++){
            char temp[100];
            for(k=0;k<j;k++){
                temp[k]=str[i+k];
            }temp[k]='\0';
            isDuplicate=0;

            for(k=0;k<count;k++){
                int same =1;
                for(l=0;substr[k][l]!='\0'|| temp[l]!='\0';l++){
                    if(substr[k][l]!=temp[l]){
                        same =0;
                        break;
                    }
                }if(same){
                    isDuplicate=1;
                    break;
                }
            }
            if(!isDuplicate){
                for(k=0;temp[k]!='\0';k++){
                    substr[count][k]=temp[k];
                }
                substr[count][k]='\0';
                count++;
            }
        }
    }
    printf("%d",count);
}
