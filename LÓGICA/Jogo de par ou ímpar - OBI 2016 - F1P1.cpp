#include <iostream>
using namespace std;

int main() {
    int p;
    int d0;
    int d1;
    int soma;
    
    cin >> p >> d0 >> d1;
    soma = (d0 + d1) % 2;
    
    if ( p == 0 && soma == 0)
    {
        cout << "0\n";
    }
    else if ( p == 1 && soma == 1)
    {
        cout << "0\n";
    }
    else
    {
        cout << "1\n";
    }
}