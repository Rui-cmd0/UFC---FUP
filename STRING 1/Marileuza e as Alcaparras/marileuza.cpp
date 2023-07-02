#include <iostream>
using namespace std;

int main(){
    string frase;
    getline(cin, frase);
    char c;
    cin >> c;
    int cont = 0;
    for (int i = 0; i < frase.size(); i++){
        if (c == frase[i])
            cont ++;
    }
    cout << cont << endl;
}