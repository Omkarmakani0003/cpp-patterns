/*

a b c d
a b c d 
a b c d
a b c d

*/

#include <iostream>

using namespace std;

int main(){
    for(int i = 1; i <= 4; i++){
        char alpha = 'A';
        for(int j = 1; j <= 4; j++){
            cout << alpha << " ";
            alpha = alpha + 1;
        }
        cout << endl;
    }
}