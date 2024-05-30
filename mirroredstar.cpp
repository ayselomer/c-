#include <iostream>
using namespace std;

int main(){
    int i;
    int j;
    int k;

    for (i = 1; i <= 10; i++){
        for(k = 10 - i; k > 0; k--){
            cout << " ";
        }
        for(j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    } 
   
    return 0;
}