/*

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1

*/

#include <iostream>

using namespace std;

int main(){
    int n = 4;

    for(int i = 1; i <= n; i++){
       
        // space
        for(int space = 1; space <= n - i; space++){
            cout << "  ";
        }

        //first piramid
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }

        //second piramide
        for(int k = 1; k < i; k++){
            cout << i - k << " ";
        }

        cout << "\n";

        
    }

     for(int x = 1; x <= n - 1; x++){
       
        // space
        for(int y = 1; y <= x ; y++){
            cout << "  ";
        }

        //first piramid
        for(int z = 1; z <= n - x; z++){
            cout << z << " ";
        }

        //second piramide
        for(int q = 1; q < n - x ; q++){
            cout << q + x - 1 << " ";
        }

        cout << "\n";

        
    }

    return 0;
}