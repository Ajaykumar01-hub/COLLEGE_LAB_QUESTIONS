#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
/* create(k)*/
struct Node* create(int k){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory allocation failed \n");
        exit(1);
    }
    newNode->data=k;
    newNode->next=NULL;
    return newNode;
}
/* InsertFront(k) */
void InsertFront(int k){
    struct Node *newNode =create(k);
    newNode->data=k;
    newNode->next=NULL;
    return newNode;
}
int main(){

    return 0;
}