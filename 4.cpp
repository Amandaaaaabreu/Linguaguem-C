#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

/*Forma simples de passar uma função por parametro*/

void MyTest( int x ){
    cout << x << " Isso foi o teste! \n";
}

int main (int argc, char** argv){
    int x = 2;

    MyTest(x);

    MyTest(4);
    MyTest(6);
    MyTest(8);

}