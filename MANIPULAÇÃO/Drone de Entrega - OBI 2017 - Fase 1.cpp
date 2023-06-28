#include <iostream>
using namespace std;

int main() 
{
    float a, g, a_rend, g_rend, a_calc, g_calc;
    cin >> a >> g >> a_rend >> g_rend;
    a_calc = a_rend / a;
    g_calc = g_rend / g;
    if (a_calc > g_calc)
        cout << "A\n";
    else if (g_calc >= a_calc)   
        cout << "G\n";
}