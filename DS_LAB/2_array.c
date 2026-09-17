#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[100],n,x,y;
    int LastX=-1;
    int LastY=-1;
    int minDistance=10000;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value of x : ");
    scanf("%d",&x);
    printf("enter the value of y : ");
    scanf("%d ",&y);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            LastX=i;
            if(LastX !=-1){
                int distance=abs(LastX-LastY);
                if(distance<minDistance)
                minDistance=distance;
            }
        }
        if(arr[i]==y){
            LastY=i;
            if(LastX !=-1){
                int distance=abs(LastX-LastY);
                if(distance<minDistance)
                minDistance=distance;
            }
        }
    }
    if(minDistance==10000)
    printf("both NUmbers are not found : ");
    else{
        printf("MINIMUM DISTANCE : %d",minDistance);
    }
        return 0;
}