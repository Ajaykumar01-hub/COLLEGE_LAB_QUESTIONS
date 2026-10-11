#include<stdio.h>
int main(){
    int arr[100][100],n;
    printf("enter the order of matrix \n");
    scanf("%d",&n);
    printf("enter sorted 2d array :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int found=0;
    int key;
    printf("enter the key element :");
    scanf("%d",&key);
    int i=0;
    int j=n-1;
    while(i<n && j>=0){
        if(arr[i][j]==key){
          found =1;
          break;

        } else if(key<arr[i][j]){
            j--;
        }else{
            i++;
        }
    }
    if(found){
        printf("element is present :");
    }else{
        printf("element is not present :");
    }

}