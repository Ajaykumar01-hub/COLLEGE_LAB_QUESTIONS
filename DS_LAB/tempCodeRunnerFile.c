#include<stdio.h>
int main(){
    int arr[100][100];
    int m,n;
    int rMax=-1;
    printf("enter the row and columns :");
    scanf("%d %d",&m,&n);
    printf("enter Boolean Matrix : Matrix enter should be SORTED \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int i=0;
    int j=n-1;
    while(i<m && j>=0){
        if(arr[i][j]==1){
             rMax=i;
             j--;
        }else{
            i++;
        }
    }
    if(rMax==-1)
    printf("no 1 present in the matrix :\n");
    else
    printf("LARGEST ROW have ones: %d",rMax+1);
    return 0;
}