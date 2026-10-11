#include<stdio.h>
int main(){
    int arr[100][100];
    int n;
    int temp;
    printf("enter value of n :");
    scanf("%d" ,&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    /*Transpose the matrix */
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    /*reverse each row */
    for(int i=0;i<n;i++){
        int start=0;
        int end =n-1;
        while(start <end){
            temp=arr[i][start];
            arr[i][start]=arr[i][end];
            arr[i][end]=temp;
            start++;
            end--;
        }
    }
    printf("Matrix after 90 degree clockwise ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
            printf("\n");
        }
    }

    
    return 0;
}
