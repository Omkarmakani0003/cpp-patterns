/*

 a b c d
 e f g h 
 i j k l
 m n o p 

*/

#include <iostream>

using namespace std;

int main(){
    char alpha = 'A';
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){ 
            cout << alpha;
            alpha = alpha + 1;
        }
        
        cout << endl;
    }
}