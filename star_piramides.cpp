/*

      *
    * *
  * * * 
* * * * 

*/

#include <iostream>

using namespace std;

int main(){

    int n = 4;

    for(int row = 1; row <= n; row++){

        //space
        for(int space = 1; space <= n - row; space++){ 
            cout << " ";
        };
        
        //star
        for(int col = 1; col <= row; col++){ 
            cout << "*";
        };

        cout << endl;
    }

     
    return 0;
}