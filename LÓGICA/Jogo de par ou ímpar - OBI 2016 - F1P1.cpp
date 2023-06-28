#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float cap_cabin;
    float alun;
    float calc_viagem;
    cin >> cap_cabin;
    cin >> alun;
    calc_viagem = ceil (alun / (cap_cabin - 1));
    cout << calc_viagem << endl;
    
}