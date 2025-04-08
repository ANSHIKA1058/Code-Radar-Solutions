// Your code here...
#include <stdio.h>

int main() {
    char str1[100], str2[100], concat[200];
    int i, j, k, len1 = 0, len2 = 0, found = 0;

    scanf("%s", str1);
    scanf("%s", str2);
    
    while(str1[len1])len1++;
        while(str2[len2])len2++;

for(i=0;i<=2*len1-len2;i++){for(j=0;j<len2;j++){
    if(concat[i+j]!=str2[j])break;
}if(j==len2){found==1;
break;}}
if(found){
    printf("Yes");
}else{
    printf("No");
}
    }