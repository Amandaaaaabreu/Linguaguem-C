#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

/* Definição de escopo global e local*/

using namespace std;

int n1,n2;  /* variaveis globais, podem ser acessadas de qualquer lugar */

int main(){

int n3, n4;  /* variaveis locais */
int res1,res2;
// operadores matematicos: + - / * % ()
n1=12;
n2=13;
n3=8;
n4=3;

res1=n2/n4;
res2=n2%n4;  // operador mod, usado para saber o resto da divisão

cout << "Valor de res1 é:" << res1 << "\n\n";
cout << "Valor de res2 é:" << res2 << "\n\n";

return 0;
}
