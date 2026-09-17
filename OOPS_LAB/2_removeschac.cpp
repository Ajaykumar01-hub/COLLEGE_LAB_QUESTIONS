#include<iostream>
using namespace std;
int main(){
    string str;
    char ch;
    cout<<"enter the string :";
    getline(cin,str);
    cout<<"enter the Character want to remove :  ";
    cin>>ch;
    cout<<"resulted string "<<endl;
    for(int i=0;i<str.length();i++){
        if(str[i]!=ch)
        cout<<str[i];
    }
}