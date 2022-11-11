#include <iostream>
#include<string>
using namespace std;

/* incremento e decremento dr variaveis */

int main(){

     // n1++;      // adiciona ou diminui 1 
    // n1=n1+1;   // encremento
   //n1+=13;     // forma contraida e rápida
  // n1-=6;     // decrementando
 //n1*=2;      //  multiplicação
//n1/=2;      // divisão


    int n1=10;       //n1++; é igual a  ++n1;

    cout << n1++ << "\n\n";  // se colocarmos n1++ irá imprimir 10 pois se usamos o operador pos-fixado ele utiliza o valor da variavel e depois faz o encremento

    cout << ++n1 << "\n\n";  // se usarmos o operador no modo pré-fixado, a esquerda, será incrementado primeiro a variavel e depois será usador o valor determinado para n1

    // o pré e pós fixado pode ser usado tanto para somar quanto para subtrair.

    return 0;
}
    
