#include <iostream>
using namespace std;

int main () {
    string frase;
    getline(cin, frase);
    for (int i = frase.size()-1; i >= 0; i--)
        cout << frase[i];
    cout << endl;
}