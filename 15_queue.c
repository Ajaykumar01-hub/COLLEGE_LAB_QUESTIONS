#include<stdio.h>
#define MAX 100
int dq[MAX];
int front=-1;
int rear=-1;
int empty(){
    return front==-1;
}
int isfull(){
    return (front==0 && rear==MAX-1)||
    (front==rear+1);
}
void insertfront(int x){
    if(isfull()){
        printf("dqueue is full : ");
        return;
    }
    if(empty())
        front=rear=0;
    else if(front==0)
    front=MAX-1;
    else
    front--;
    dq[front]=x;    
    
}
void insertend(int x){
    if(isfull()){
        printf("dequeue is full :");
        return;
    }
    if(empty())
        front=rear=0;
        else if(rear==MAX-1)
        rear=0;
        else
            rear++;
            dq[rear]=x;
}
void deletefront(){
    if(empty()){
        printf("dqueu is empty :\n");
        return;
    }
    printf("deleted element : %d\n",dq[front]);
    if(front==rear)
    front=rear=-1;
    else if(front==MAX-1)
    front=0;
    else
    front++;

}
void deleteEnd(){
    if(empty()){
        printf("dqueu is empty :\n");
        return;
    }
    printf("deleted element : %d\n",dq[front]);
    if(front==rear)
    front=rear=-1;
    else if(rear==0)
    rear=MAX-1;
    else
    rear--;

}
void printfront(){
    if(empty()){
        printf("dequeue is empty :\n");
    }
    printf("FRONT %d\n",dq[front]);
}
void printEnd(){
    if(empty()){
        printf("dequeue is empty :\n");
    }
    printf("END %d\n",dq[rear]);
}
int main(){
    insertfront(20);
    insertfront(20);
    insertfront(30);
    insertend(30);
    insertend(30);
    deletefront();
    deletefront();
    deleteEnd();
    printfront();
    printEnd();
}