/*

1 2 3 4
  2 3 4
    3 4
      4 

*/

#include <iostream>

using namespace std;

int main(){
    int n = 4;

    for(int i = 1; i <= n; i++){
       
        // space
        for(int space = 1; space <= i - 1; space++){
            cout << "  ";
        }

        for(int j = 1; j <= n - i + 1; j++){
            cout << j + i - 1 << " ";
        }
        
        cout << "\n";
    }
    return 0;
}