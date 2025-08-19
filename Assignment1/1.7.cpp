#include <bits/stdc++.h>
using namespace std;

int main() { 
    int n;
    cin >> n;
    bool bit = true;
    bool outterBit = true;

    for(int i = 0; i < n; i++){
       bit = outterBit;
        for(int j =0; j <= i; j++){
            cout << (bit ? "1": "0");
            bit = !bit;
        }
        outterBit = !outterBit;

        cout << endl;
    }



    
    
    return 0; 

}