#include<stdio.h>
#include<stdlib.h>
struct Node{
 int data;
 struct Node *next;
};
int main(){
struct Node *head,*second,*third;
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));

head->data=10;
second->data=10;
third->data=10;

head->next=second;
second->next=third;
third->next=NULL;

struct Node *temp;
temp=head;
while(temp!=NULL)
{
    printf("%d \n",temp->data);
    temp=temp->next;
}
return 0;
}
