#include <stdio.h>
#include <ctype.h>

int main() {
    
  char str[100];
  scanf("%[^\n]s",str);
  for(int i=0;i!='\0';i++){
    char a = toupper(str[i]);
    printf("%s",str);
  }
   
}