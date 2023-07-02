#include <iostream>
using namespace std;

int main ( ){
    char c;
    cin >> c;
    if (c >= 65 && c < 91)
        c += 32;
    else if (c >= 97 && c < 122)
        c -=  32;
    cout << c << endl;
}
