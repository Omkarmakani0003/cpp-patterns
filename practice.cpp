#include <iostream>
using namespace std;

int main(){
    int n = 3;

    //int row = 1;
    // while(row <= n){
    //     int col = 1;
    //     while(col <= row){
    //         cout << "*";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    
    for(int i = 0; i <= n; i++){
        
        for(int j = 0; j <= n; j++){
            char ch = 'a' + i + j;
            cout << ch;
        }
        cout << endl;
    }
}