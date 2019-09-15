#include <iostream>
#include <vector>
using namespace std;

int main (){
setlocale(LC_ALL, "Portuguese");
    vector<int> numeros;
    int controle, NumeroDeNumeros, Soma,i;
    double media;
    controle = 0;
    Soma = 0;
    NumeroDeNumeros = 0;
    media = 0;
    cout << "Digite qualquer numeros inteiros para realizar uma operação ou digite [0] para as operacoes" << endl;
    // Digitar numeros
    while (i != 0){
        cin >> i;
        numeros.push_back(i);
        NumeroDeNumeros++;
    }

    // Fim de digitar numeros
    // Decisões
    int decisao = 1;
    while (decisao != 0){
        cout << endl << endl;
        cout << "Digite [1] para: Imprimir a somatória de seus elementos\n";
        cout << "Digite [2] para: Imprimir a média de seus elementos\n";
        cout << "Digite [3] para: Imprimir a média e a somatória\n";
        cout << "Digite [4] para: Substituir por zero todos os valores negativos e imprimir a média\n";
        cout << "Digite [5] para: Substituir por zero todos os valores repetidos e imprimir a média e a somatória\n";
        cout << "Digite [6] para: Mostrar vetor ordenado\n\n";


    cin >> decisao;
    cout << endl << endl;

    switch (decisao){

    case 1:
    for (int i = 0; i < NumeroDeNumeros; i++){
        Soma += numeros[i];
    }
    cout << "A somatória de todos os elementos é: " << Soma << endl;
        break;
        
    case 2:
    for (int i = 0; i < NumeroDeNumeros; i++){
        Soma += numeros[i];
    }
    NumeroDeNumeros--;
    media = Soma / NumeroDeNumeros;
    cout << media;









        }
    }



    return 0;
}
