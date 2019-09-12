#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros;
    int numero, opcao;
    string continuar;

    int soma = 0;

    //PREENCHER O VETOR
    do {

        cout << "Adicione um valor inteiro ao vetor:";
        cin >> numero;
        numeros.push_back(numero);

        cout << "Deseja adicionar mais um numero?(s ou n):";
        cin >> continuar;

    } while (continuar == "s");

    cout << "[";
    for (int x  : numeros) {
        cout << x << ",";
    }
    cout << "]";


    do {

        cout << "Digite uma opcao:";
        cin >> opcao;

        switch (opcao){

            case 1 :

                for (int valor  : numeros) {
                    soma += valor;
                }

                cout << "Soma do vetor:" << soma <<endl;

            break;

            case 2 :

                for (int valor  : numeros) {
                    soma += valor;
                }

                cout << "Media do vetor:" << soma / numeros.size() << endl;
                break;

            case 4 :
                for (int i = 0; i < numeros.size(); ++i) {
                    if (numeros[i] < 0){
                        numeros[i] = 0;
                    }
                }

                cout << "[";
                for (int x  : numeros) {
                    cout << x << ",";
                }
                cout << "]";

            break;

            case 5 :
                for (int x = 0; x < numeros.size(); x++) {
                    for (int y = 0; y < numeros.size(); y++) {
                        if (x != y && numeros[x] == numeros[y]){
                            numeros[y] = 0;
                        }
                    }
                }

                cout << "[";
                for (int x  : numeros) {
                    cout << x << ",";
                }
                cout << "]";

            break;

            case 6 :
                sort(numeros.begin(), numeros.end());
                cout << "[";
                for (int x  : numeros) {
                    cout << x << ",";
                }
                cout << "]";

        }

    } while(opcao != 0);


    return 0;
}