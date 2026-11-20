// inserting element in different place in linkedlist 
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
}*first=NULL;
void create(int arr[],int n){
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=0;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
int count(struct Node *p) {
    int c = 0;
    while (p != NULL) {
        c++;
        p = p->next;
    }
    return c;
}
void display(struct Node *p)
{
    if(p) //it means p!=NULL
    {
        
        printf("%d ",p->data);
        display(p->next);
        
    }
}
void insert(struct Node *p,int index, int x)
{
    struct Node *t;
    if(index <0 || index> count(p))
    return;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        p=p->next;
        t->next=p->next;
        p->next=t;
    }

    
}

int main(){
   int arr[]={3,4,5,6,7};
   create(arr,5);
   display(first);
   insert(first,4,10);

    return 0;
}