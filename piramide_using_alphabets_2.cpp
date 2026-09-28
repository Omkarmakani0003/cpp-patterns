/*

a 
b c
c b d
d e f g

*/

#include <iostream>

using namespace std;

int main(){
   
    int i = 1;
    
    while(i <= 4){
       int j = 1;

       while(j <= i){
          char alphabet = 'a' + j + i - 2;
          cout <<  alphabet << " ";
          j++;
       }
       cout << endl;
       i++;
    }
    return 0;
}