
#include <iostream>
#include <cstdio>
 using namespace std;
 
int main() {
    int L;
    int C;
    cin >> L;
    cin >> C;
    int movimento = L + C;
    
    
    if (movimento % 2 == 0) {
       cout << 1 << "\n"; 
       
    } else {
       cout << 0 << "\n";
       
    }
}