#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void create(){
    if(top==-1){
        printf("stack is crated :");
    }
}
void push(int x){
    if(top==MAX-1){
        printf("stack is overflow :");
    }else{
        top++;
        stack[top]=x;
        printf("element is inserted into stack %d\n",x);
    }
}
void pop(){
    if(top==-1){
        printf("stack is underflow");
    }else{
        top--;
        printf("pop element is :%d \n",stack[top]);
    }
}
void empty(){
    if(top==-1){
        printf("stack is empty :\n");
    }else{
        printf("stack is not empty :\n");
    }
}
int size(){
    printf("the sixe of the stack :%d\n",top+1);
}
void display(){
    if(top==-1){
        printf("stack is empty :");
    }else{
        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
            printf("\n");
        }
    }
}
int main(){
    
push(20);
push(20);
push(20);
push(20);
push(20);
push(20);
push(20);
push(20);
pop();
pop();
empty();
size();
display();


}