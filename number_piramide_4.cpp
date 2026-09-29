/*

      1
    2 3
  4 5 6 
7 8 9 10  

*/

#include <iostream>

using namespace std;

int main(){
    int n = 4;
    int count = 1;
    for(int i = 1; i <= n; i++){
       
        // space
        for(int space = 1; space <= n - i; space++){
            cout << "  ";
        }

        for(int j = 1; j <= i; j++){
            cout << count << " ";
            count++;
        }
        
        cout << "\n";
    }
    return 0;
}