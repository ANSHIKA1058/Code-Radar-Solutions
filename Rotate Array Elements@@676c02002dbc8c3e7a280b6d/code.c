// Your code here...
#include <stdio.h>
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    //step 1
    k=k%n;
    //step 2 -rvrse pura array
    reverse(arr,0,n-1);
    //step3 starteing ke K elemnts reverse
    reverse(arr,0,k-1);
    //step4
    reverse(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}