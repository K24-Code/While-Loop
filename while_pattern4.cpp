#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    //
    int i=1, j=0;
    while(i <= n){
        while(j < i){
            cout<< i <<" ";
            j++;
        }
        j=0;
        i++;
        cout<<endl;
    }
    return 0;
}
