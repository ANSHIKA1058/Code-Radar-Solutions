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
    scanf("%d",&T);
    for(int i=0;i<n;i++){
        if(arr[i]==T){
            int index =i;
            break;
        }
    }
    printf("%d\n",index);
    
}