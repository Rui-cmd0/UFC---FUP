#include <iostream>
using namespace std;

int main(){
    string nome;
    cin >> nome;
    int valor {0};
    for (int i = 0; i < nome.size(); i++){
        valor = valor + nome[i];
    }
    valor = valor % 50;
    cout << valor << endl;
}