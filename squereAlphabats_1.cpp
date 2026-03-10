/*

a a a a
b b b b
c c c c 
d d d d 

*/

#include <iostream>

using namespace std;

int main(){
    char alpha = 'a';
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
           cout << alpha;
        }
        alpha = alpha + 1;
        cout << endl;
    }
}
