#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*
mais uma vez, muitos prints não especificados. mas ok.
*/
int main(void)
{
    int contador = 0;
    int var, i;


    for (i = 0; i < SIZE; i++){
        cout << "Digite um número inteiro: ";
        cin >> var;

        if (var < 0){
            contador += 1;
        }

    }

    cout << "A sequência possui " << contador << " números negativos.";


    return 0;
}
