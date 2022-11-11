#include <stdio.h>
#include <stdlib.h>
#include <iostream> /* io = entrada e saída*/
#include <string>

using namespace std;

int main(){
    /* tipo, nome da variavel,*/
    int vidas=0; /* 10, 30, -11 ...*/

    char letra='P'; /* 'B' 'A'...*/

    double dinheiro=2.4999; /* 2.5, 5.6 ...*/ /* precisão maior que o float */

    float decimal2=7.8; /* 2.49999999 vira 2.5 */

    bool opcoes=false; /* true or false */

    string nome="Quanto maior o conhecimento, menor o ego!"; /* variavel que vai receber textos maiores, exemplo: "Amanda" */

    /* Poderia usar um cout  para printar tudo de uma vez */

    /* Usando valores do teclado */
 
    cout << "Digite o numero de vidas:";
    cin >> vidas;
    cout << "Digite uma letra:";
    cin >> letra;
    cout << "Digite o valor do dinheiro:";
    cin >> dinheiro;
    cout << "Digite seu nome:";
        cin >> nome;

    cout << "\n" << vidas;
    cout << "\n" << letra;
    cout << "\n" << dinheiro;
    cout << "\n" << nome;

    return 0;


}