#include<iostream>

using namespace std;

int main() {
    
    int a, b, c;
    cin >> a >> b >> c;

    if (a>b) {
         if (a>c) {
             cout << "a is bigger";
         } else {
             cout << "c is bigger"; 
         }
    } else if (b>c) {
        cout << "b is bigger";
    } else {
        cout << "c is bigger";
    }
    
    return 0;
}