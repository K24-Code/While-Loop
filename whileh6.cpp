#include<iostream>
using namespace std;
int main(){
    //TYPECASTING METHOD
    cout<<"Alphabets using typecasting method : "<<endl;
    int i=65;  //ASCII VALUES
    while(i<=90){
        cout<< (char)i <<" ";
        i++;
    }

    cout<<endl; 
    
    //DIRECT APPROACH
    cout<<"Printing of alphabets directly: "<<endl;
    char ch= 'A';
    while(ch<='Z'){
        cout<< ch << " ";
        ch++;
    }
    return 0;
}