#include <iostream>
using namespace std;

int main() {

    for (int x = 0; x < 3; x++){

        for (int z = 2; z > x; z--)
        {
            cout << " ";
        }
        for (int y = 0; y < 5 + 2*x; y++){
            cout << "*";
        }

        for (int l = 0; l < 5 - 2 * x; l++)
        {
            cout << " ";
        }

        for (int yy = 0; yy < 5 + 2*x; yy++){
            cout << "*";
        }

            cout << endl;
        
    }

        for (int i = 0; i < 10; i++)
        {

            for (int k = 0; k < i; k++)
            {
                cout << " ";
            }

            for (int j = 0; j < 19 - 2 * i; j++)
            {
                cout << "*";
            }

        cout << endl;
    }

    

        return 0;
}

