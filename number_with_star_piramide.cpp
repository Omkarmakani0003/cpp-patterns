/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include <iostream>

using namespace std;

int main(){
    int n = 5;

    for(int i = 1; i <= n; i++){
       
        for(int j = 1; j <= n - i + 1; j++){
             cout << j << " ";
        }
         
        for(int k = 1; k < i; k++){
            cout << "*" << " ";
        }

        for(int y = 1; y < i; y++){
            cout << "*" << " "; 
        }

        for(int x = (n - i + 1); x >= 1; x--){
            cout << x << " ";
        }

        

        cout << "\n";
    }
    


}