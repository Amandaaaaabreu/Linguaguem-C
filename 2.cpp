#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

/* Função main é obrigatoria ter no programa */

int main(){
    int myArray [10];

    for (int i = 0; i < 10; i++ ) {
        myArray [i] = i + 10;
    }

     for (int i = 0; i < 10; i++ ) {
       cout <<  myArray [i] << "\n";
    }
    

}

