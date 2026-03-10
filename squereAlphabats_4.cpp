/*

a b c d
b c d e
c d e f
d e f g

*/

#include <iostream>

using namespace std;

int main(){
    
    for(int i = 1; i <= 4; i++){
        char alpha = 'A';
        alpha = alpha + i - 1;
        
        for(int j = 1; j <= 4; j++){
           cout << alpha;
           alpha = alpha + 1;
        } 
        
        cout << endl;
    }
}