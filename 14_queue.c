#include<stdio.h>
#define MAX 100
int q[MAX];
int front=0,rear=-1;
void enqueue(int x)
{
    q[++rear]=x;
}
int dequeue(){
return q[front++];
}
int empty(){
    return front>rear;
}
void reverse(){
    int x;
    if(empty())
    return;
    x=dequeue();
    reverse();
    enqueue(x);
}
void display(){
    if(rear<front)
    printf("queue is empty");
    else{
        for(int i=front;i<=rear;i++){
            printf("%d",q[i]);
            printf("\n");
        }
    }
}
int main(){
    enqueue(94);
    enqueue(56);
    enqueue(54);
    enqueue(35);
    reverse();
    display();
}
