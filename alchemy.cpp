#include <iostream>
#include <string>

using namespace std;

int main()
{

    string formula;
    string vowels = "aeiou";
    int vowel = 0;

    cout << "Enter the 12-character formula: ";
    cin >> formula;

    if (formula.length() != 12)
    {
        cout << "Incorrect formula";
        return 0;
    }

    for (int i = 0; i <= 2; i++)
    {

        for (int j = 0; j < vowels.length(); j++)
        {
            if (formula[i] == vowels[j])
            {
                vowel++;
            }
        }
    }
    

    if(vowel >= 2){
        cout << "Nature: Liquid";
    
    }

    else{
        cout << "Nature: Solid";
    }

    return 0;
}
