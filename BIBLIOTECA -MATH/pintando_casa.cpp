#include <iostream>
#include <cstdio>
using namespace std;

int main()

{
    int velocidade_media;
    float tempo_viagem;
    float consumo_carro_lt;

    cin >> velocidade_media;
    cin >> tempo_viagem;
    cin >> consumo_carro_lt;
    tempo_viagem = tempo_viagem / 60;


    float dist_percorrida = velocidade_media * tempo_viagem;
    float desempenho = dist_percorrida / consumo_carro_lt;
    printf("%.2f\n", desempenho);
    return 0;
}