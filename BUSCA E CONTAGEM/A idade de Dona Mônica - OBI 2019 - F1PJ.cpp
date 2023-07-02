#include <iostream>
using namespace std;

int main()
{
    int monica;
    int crianca_a;
    int crianca_b;
    cin >> monica;
    cin >> crianca_a;
    cin >> crianca_b;
    int crianca_c = monica - (crianca_a + crianca_b) ;
    int mais_velho = crianca_a > crianca_b ? crianca_a : crianca_b;
    mais_velho = crianca_c > mais_velho ? crianca_c : mais_velho;
    cout << mais_velho << endl;
}