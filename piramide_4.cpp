/*

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/

#include <iostream>

using namespace std;

int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << j + i - 1 << " ";
        }
        cout << endl;
    }
}