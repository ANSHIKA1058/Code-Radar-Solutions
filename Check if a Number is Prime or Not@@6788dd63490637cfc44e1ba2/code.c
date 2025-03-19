// Your code here...
int num,i,f=0;
scanf("%d",&num);
if(num>1){
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            f=1;
            break;
        }
    }
    if(f==0){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
    else{
        printf("Not Orime\n");
    }
}