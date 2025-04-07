#include <stdio.h>
#include <string.h>
int main(){
    char str1[1000],str2[1000];
    int count1[26]={0}, count2[26] = {0};
    scanf("%s", str1);
    scanf("%s", str2);
   /* if(strlen(str1)!=strlen(str2)){
        printf("No\n");
        return 0;
    }*/
    for(int i=0;str1[i]!='\0';i++){
        count1[str1[i]-'a']++;
        count2[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes");
}