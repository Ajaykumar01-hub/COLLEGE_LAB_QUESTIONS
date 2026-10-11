#include<stdio.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char c){
    stack[++top]=c;
}
char pop(){
    return stack[top--];
}
int match(char a,char b){
   if(a=='(' && b==')' )
   return 1;
   if(a=='{' && b=='}')
   return 1;
   if(a=='[' && b==']')
   return 1;
}
int main(){
    char exp[MAX];
    int balanced=1;
    printf("enter the expression in which have parenthesis :");
    scanf("%s",exp);
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(exp[i]);
        }else if( exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if(top==-1){
               balanced=0;
               break;
            }
            if(!match(pop(),exp[i])){
                balanced=0;
                break;
            }
        }
    }
    if(top!=-1)
    balanced=0;
    if(balanced){
        printf("parenthesis matching :");
    }else{
        printf("not valid parenthesis");
    }

}