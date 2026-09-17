#include<stdio.h>
#define MAX 100
int stack[MAX];
top=-1;
void create(){
    if(top=-1)
    printf("Stack is created :");
}
void push(int x){
    if(top==MAX-1)
    printf("stack is overflow :");
    else{ 
        top++;
        stack[top]=x;
        printf("%d,ELEMENT PUSH INTO STACK ",stack[top]);
    }

}
void pop(){
    if(top==-1)
    printf("stack is overflow :");
    else{
        stack[--top];
    }
}