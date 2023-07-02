#include <iostream>
using namespace std;

int main() {
    int num_posicoes;
    int pos_disco;
    int pos_aviao;
    int qntd_movimento;
    
    cin >> num_posicoes >> pos_disco >> pos_aviao;
    
    qntd_movimento = pos_disco - pos_aviao; 
    
    
    if ( pos_disco < pos_aviao)
    {
        qntd_movimento = (pos_disco - pos_aviao) + num_posicoes;
        
        cout << qntd_movimento << endl;
    }
    else
    {
        cout << qntd_movimento << endl;
    }
    
    
}