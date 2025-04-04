// Your code here...
#include <stdio.h>
int main(){
    char c[50];
   scanf("%[^\n]s",c);
   int size = 0;
   int k=0;
   while(c[k]!='\0'){
    size++;
    k++;
   }
   printf("%d ",size);
   for(int i=0;j=size-1;i<=j;i++;j--){
    char temp = c[i];
    c[i]=c[j];
    c[j]=temp;
   }
   puts(c);
}