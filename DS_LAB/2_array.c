#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[100],n,x,y;
    int lastX=-1;
    int lastY=-1; //-1 is for these element is not present yet in the array
    int minDistance=10000;
    printf("enter the size of the array :");
    scanf("%d",&n);
    if(n<=0 || n>100){
        printf("invalid array :");
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value of x: ");
    scanf("%d",&x);
    printf("enter the value of y: ");
    scanf("%d",&y);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            lastX=i;
        }
        if(arr[i]==y){
            lastY=i;
        }
        if(lastX !=-1 && lastY !=-1){
            int distance =abs(lastX-lastY);
            if(distance<minDistance){
                minDistance= distance;
            }
        }
    }
    if(minDistance==10000){
        printf("the pair is not exist :");
    }else{
        printf("MINIMUM DISTANCE : %d",minDistance);
    }
    
}