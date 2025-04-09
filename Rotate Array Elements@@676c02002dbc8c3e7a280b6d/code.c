// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    fot(int i=0;i<n;;i++){
        scanf("%d",&arr[i]);
    }
    //reverse(arr);
    //index 1-4 reverse
    for(int i=1,j=4;i<=j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}