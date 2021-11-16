#include<iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    // forLoop
    
    // int sum = 0;
    // for(int counter=0; counter <= n; counter++ ) {
    //     sum = sum + n; 
    // }

    // cout << sum <<endl; 
    

    // whileLoop

    // while(0>n) {
    //     cout << n << endl;
    //     cin >> n;
    // }

    //doWhile
     
    do {
        cout << n << endl;
        cin >> n;
    }while(n>0);

    return 0;
}