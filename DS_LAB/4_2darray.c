#include<stdio.h>
int main(){
    int arr[100][100],n;
    int key;
    int found=0;
    printf("Enter the value of N :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the Value of key :");
    scanf("%d",&key);
    int i=0;
    int j=n-1;
    while(i<n && j>=0){
        if(arr[i][j]==key){
           found=1;
           break;

        }
        else if(key<arr[i][j]){
         j--;
        }else{
            i++;
        }
    }
    if(found)
    printf("Element is present \n");
    else{
        printf("element is not present :");
    }
    return 0;
}