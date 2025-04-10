// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int T;
    int index = -1;
    scanf("%d",&T);
    for(int i=0;i<n;i++){
        if(arr[i]==T){
            index =i;
            break;
        }
    }
    printf("%d\n",index);
    
}