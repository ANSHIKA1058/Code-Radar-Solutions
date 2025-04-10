// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    if(n==0){
        printf("0\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int max_length = 1;
    int current_length = 1;
    for(int i=1;i<n;i++){
         if(arr[i]==arr[i-1]+1){
        current_length++;
        if(current_length>max_length){
            max_length=current_length;
        }
    }else if(arr[i]!=arr[i-1]){
        current_length=1;
    }
    }
    printf("%d\n",max_length);
   
}