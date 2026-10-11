#include<stdio.h>
int main(){
    int arr[100],n,k;
    printf("enter the size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number of elements you want to left rotate: ");
    scanf("%d",&k);
    k=k%n;
    for(int i=0;i<k;i++){
        int temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];

        }
        arr[n-1]=temp;
    }
    printf("result array :");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    return 0;
}