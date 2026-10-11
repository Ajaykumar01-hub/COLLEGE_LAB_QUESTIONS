#include<stdio.h>
#define MAX 100
int  queue[MAX];
int rear=-1,front=0;
void create()
{
    front=0;
    rear=-1;
}
int empty(){
    return rear<front;
}
int size(){
    return rear-front+1;
}
void EnQueue(int x)
{
    if(rear==MAX-1)
    printf("queue is empty");
else{
rear++;
queue [rear]=x;
}
}
void dequeue(){
    if(rear<front)
    printf("queue is empty");
    else{
        front++;
    }
}
void display(){
    if(rear<front)
    printf("queue is empty");
    else{
        for(int i=front;i<=rear;i++){
            printf("%d",queue[i]);
            printf("\n");
        }
    }
}
int main(){
    create();
    empty();
    EnQueue(29);
    EnQueue(64);
    EnQueue(45);
    EnQueue(54);
    EnQueue(34);
    dequeue();
    display();
    size();
}

