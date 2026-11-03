// traversing in a linked list normal and recursively and traverse back
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Node{
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

// void display(struct Node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ",p->data);
//         p=p->next;
//     }
// }
// void display(struct Node *p)
// {
//     if(p) //it means p!=NULL
//     {
//         printf("%d \n",p->data);
//         display(p->next);
//     }
// }
// -----print all elements in linked list in reverse order-----
void display(struct Node *p)
{
    if(p) //it means p!=NULL
    {
        display(p->next);
        printf("%d ",p->data);
        
    }
}
// int count(struct Node *p)
// {
//     int c=0;
//     while(p!=NULL)
//     {
//         c++;
//         p=p->next;
//     }
//     return (c);
// }
// ----Now through recursive functions -----
int count(struct Node *p)
{
    if(p==0)
    return 0;
    else
    return count(p->next)+1;
}
// int add(struct Node *p)
// {
//     int sum=0;
//     while(p)
//     {
//         sum+=p->data;
//         p=p->next;
//     }
//     return sum;
// }
//----find sum through recursive functions-----
int add(struct Node *p)
{
    if(p==0)
    return 0;
    else
    return add(p->next)+p->data;
}
// int max(struct Node *p)
// {
//     int m=-32423;
//     while(p)
//     {
//         if(p->data>m)
//         m=p->data;
//         p=p->next;
//     }
//     return m;

// }
//----through recursive functions-----
// int max(struct Node *p)
// {
//    int x=0;
//     if(p==0)
//     return INT_MIN;
//     else{
//         x=max(p->next);
//         if(x>p->data)
//         return x;
//         else
//         return p->data;
//     }


// }
//-----find max through ternary operator-------
int max(struct Node *p){
    int x=0;
    if(p==0)
    return INT_MIN;
    x=max(p->next);
    return (x> p->data) ? x : p->data;
}
// linear searching in the linked list
struct Node* search(struct Node *p, int key )
{
    while(p!=NULL)
    {
        if(key==p->data)
        return p;
        p=p->next;
    }
    return NULL;
}
// linear search through recursion 
struct Node* Rsearch(struct Node *p,int key)
{
    if(p==0)
    return NULL;
    if(key==p->data)
    return p;
    return Rsearch(p->next,key);
}
// linear search but in this case we MOVE TO HEAD
struct Node* Msearch(struct Node *p,int key)
{
   struct Node *q=NULL;
   while(p)
   {
    if(key==p->data){
        if(q!=NULL){
    q->next=p->next;
    p->next=first;
    first=p;
        }
        return p;
    }
   q=p;
   p=p->next;
   }
  return NULL;

}
int main(){
   int arr[]={3,4,5,6,7};
   create(arr,5);
   display(first);
   printf("COUNT : %d\n",count(first));
   printf("SUM : %d\n",add(first));
   printf("MAX : %d\n",max(first));
//    struct Node *result=search(first,7);
  // struct Node *Rresult=Rsearch(first,3);
   struct Node *Mresult=Msearch(first,4);
   if(Mresult!=NULL)
   printf("ELEMENT FOUND : %d",Mresult->data);
   else
   printf("element is not present : ");
   return 0;
}