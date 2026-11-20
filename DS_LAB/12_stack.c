#include<stdio.h>
#include<ctype.h>
int top=-1;
int stack[100];
void push(int x){
    stack[++top]=x;
}
int pop(){
    return stack[top--];
}
int main(){
    int a,b,result;
    char exp[100];
    printf("enter the expression: ");
    scanf("%s",exp);
    for(int i=0;exp[i]!='\0';i++){
        if(isdigit(exp[i])){
            push(exp[i]-'0');
        }else{
            b=pop();
            a=pop();
            if(exp[i]=='+')
            result = a+b;
            else if(exp[i]=='-')
            result = a-b;
            else if(exp[i]=='*')
            result = a*b;
            else if(exp[i]=='/')
            result= a/b;
            push(result);
        }
    }
    printf("result %d",pop());
}
