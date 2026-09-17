#include<stdio.h>
int main(){
    int arr[100],n;
    int result=0;
    printf("enter size of the array :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
       result=result^arr[i];
    }
    printf("NON-repeating or Odd occurence: %d",result);
    return 0;
}