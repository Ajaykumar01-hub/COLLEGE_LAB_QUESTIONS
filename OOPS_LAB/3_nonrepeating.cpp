#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter string :";
    getline(cin,str);
    cout<<"NON-repeating character: ";
    for(int i=0;i<str.length();i++){
        if(str[i] == ' ')// single quotes hi likhna hai because it use for single character
             continue;
             int count=0;
             for(int j=0;j<str.length();j++){
                if(str[i]==str[j])
                count++;
             }
             if(count==1)
             cout<<str[i]<<" ";

    }
}