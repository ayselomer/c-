#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Give me a num: ";
    cin >> num;

    while(num <= 20){
        cout << "Your number is too low. Give me another number: ";
        cin >> num;
 }

 for (int i = 5; i <= 11; i++){
    if(num % i == 0){
        cout << num << " is a multiple of " << i << endl;
    }
 }
}