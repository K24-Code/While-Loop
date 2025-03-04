#include<iostream>
using namespace std;
int main(){
    cout<<"using typecasting"<<endl;
    int i=97;
    while(i<=122){
        cout<<(char) i << " ";
        i++;
    }
    cout<<endl ;
    cout<<"using direct char method"<<endl;
    char ch = 'a';
    while(ch <= 'z'){
        cout<< ch <<" ";
        ch++;
    }
    return 0;
}