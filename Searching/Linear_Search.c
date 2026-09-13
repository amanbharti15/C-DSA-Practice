#include<stdio.h>
#include<stdbool.h>
int main(){
    int i,n,num;
    printf("enter the num\n");
    scanf("%d",&num);
    int arr[num];

    printf("enetr the numbers\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    bool flag = false;
    printf("enter target value n:\n");
    scanf("%d",&n);

    i=0;
    while(i<n){
        if(arr[i]==n){
            flag=true;
            break;
        }
        i++;
    }
    if(flag){
        printf("found it %d\n",i);
    }
    else{
        printf("not found");
    }
    return  0;
}
