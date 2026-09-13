#include<stdio.h>
int main(){
    int i,j,n,temp;
    printf("enter thr number\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the number n\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("the sorted result %d\n",arr[i]);
    }
    return 0;
}
