/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*você não usou o método que lê entradas indefinidamente, por isso não tinha como passar
 no entanto o algoritmo para dois números apenas está ok, por isso vou considerar 40%*/
int main( void )
{
     int m, n, i;
     int soma = 0;

     cout << "Insira um número inteiro: ";
     cin >> m;

     cout << "Insira um número inteiro (-10000 ≤ n ≤ 1000): ";
     cin >> n;

     if (n > 0){

       for (i = 0; i < n; i++){
         soma = soma + (m + i); 
       }

     }

     if (n < 0){

       n = n * -1;

       for (i = 0; i < n; i++){

         soma = soma + (m - i); 
       }

     }
    
     cout << "A soma é: " << soma; 

     return 0;
}
