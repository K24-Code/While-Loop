#include<iostream>
using namespace std;
int main(){
    int n, num=1;
    int i=1, j=0;
    cout<<"Enter the value of n: ";
    cin>>n;

    //counting
    while(i <= n){
        while (j <= i-1){
            cout<< num << " ";
            j++;
            num++;
        }
        j=0;
        i++;
        cout<<endl;
    }
}