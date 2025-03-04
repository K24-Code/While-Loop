#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<endl;
    int i = 0;
    while(i < n){
        int j = 0, k = 0;

        //FOR SPACING
        while(k <= n - i - 2){
        cout<< " ";
        k++;
    }
    k = 0;
    
    //FOR PATTERN PRINTING
    while(j <= i){
        cout<<" * ";
        j++;
    }
    j = 0;
    i++;
    cout<<endl;
    }
    return 0;
}


/*#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void pypart2(int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n) {

        // for spacing
        while (k <= n - i - 2) {
            cout << " ";
            k++;
        }
        k = 0;

        // For Pattern printing
        while (j <= i) {
            cout << "* ";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}

// Driver Code
int main()
{
    int n = 5;

    // Function Call
    pypart2(n);
    return 0;
}*/