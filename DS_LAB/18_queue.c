#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int front=-1;
int rear=-1;
void create(){
   front=rear=-1;
}
void enqueue(int value){
    if((rear+1)%SIZE==front){
        printf("Queue is empty : ");
        return;
    }
    if(front==-1){
       front=0;
    }
    rear=(rear+1)%SIZE;
    queue[rear]=value;
    printf("Successfully inserted elements :%d\n",value);
}
void dequeue(){
    if(front==-1){
        printf("queue is empty :");
        return;
    }
    printf("Deleted elemet : %d\n",queue[front]);
        if(front==rear){
            front=rear=-1;
        }else{

        front=(front+1)%SIZE;
    }
}
int isempty(){
    if(front==-1){
        printf("queue is empty :");
    }
}
void display(){
    if(front==-1){
        printf("queue is empty :");
    }
    int i=front;
    while(1){
        printf("%d\n",queue[i]);
        if(i==rear){
           break;
        }
        i=(i+1)%SIZE;
    }
    printf("\n");
}
void peek(){
    if(front==-1){
        printf("queue is empty :");
    }else{
        printf("%d\n",queue[front]);
    }
}
void last(){
    if(front==-1){
        printf("queue is empty :");
    }else{
        printf("%d\n",queue[rear]);
    }
}
int main(){
    create();
    enqueue(23);
    enqueue(24);
    enqueue(25);
    enqueue(26);
    enqueue(27);
    dequeue();
    dequeue();
    display();
    peek();
    last();
}