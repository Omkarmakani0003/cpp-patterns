/*

d
c  d
b  c  d
a  b  c  d

*/

#include <iostream>

using namespace std;

int main(){

    int n = 4;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
            char alphabet = 'a' + n + col - row - 1;
            cout << alphabet << " ";
        }
        cout << "\n";
    }

    return 0;
}