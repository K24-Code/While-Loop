#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=1;
    while(i<= 10){
        cout<< n << " * " << i << " = " << n*i << endl;
        //cout<< n*i << endl;
        i++;
    }
    return 0;
}