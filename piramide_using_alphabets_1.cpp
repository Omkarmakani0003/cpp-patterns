/*

a 
b c
d e f
g h i j

*/

#include <iostream>

using namespace std;

int main(){
   
    int i = 1;
    char alphabet = 'a';

    while(i <= 4){
       int j = 1;

       while(j <= i){
          cout << alphabet << " ";
          alphabet++;
          j++;
       }
       cout << endl;
       i++;
    }
    return 0;
}

