#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
/* o comando GOTO não é gambiarra, o uso excessivo talvez seja */

int main(){
    int n1, n2, rest;
    char opc;

    inicio:

    
     // system("cls"); comando para limpar a tela

    cout << "Digite o valor da nota 1 \n";
    cin >> n1;

    cout << "Digite o valor da nota 2 \n";
    cin >> n2;

    rest=n1+n2;

    if(rest >=50){
       cout << " \n APROVADO \n\n";
    }

    else {
        cout << "\n REPROVADO \n";
    }

    cout << "\n Digitar outras notas? \n (S/N):";
    cin >> opc;

    if(opc=='S' or opc=='s'){
        goto inicio;
    }

    return 0;
}