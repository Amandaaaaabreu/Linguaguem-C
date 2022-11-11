#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;


  int main() {

   int x = 20; 

   cout << "Digite um número qualquer para x:";
   cin >> x;

   if (x > 0) {
   cout << "X é positivo!\n";
   }

   else if(x < 0){
   cout << "X é negativo!\n";
   }

   else {
   cout << "X é zero!\n";
   }

  
}
