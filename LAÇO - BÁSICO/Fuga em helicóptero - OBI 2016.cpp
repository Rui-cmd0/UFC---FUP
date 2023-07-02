#include <iostream>
using namespace std;

int main() {
    int H;
    int P;
    int F;
    int D;
    cin >> H >> P >> F >> D;
    int i = F;
    
    while (true)
    {
         i = i + D;
         if ( i < 0)
         i += 16;
         
        if ( i % 16 == P)
        {
            cout << "N\n";
            return 0;   
        }
        if ( i % 16 == H)
        {
            cout << "S\n";
            return 0;
        }
        
       
    }
}