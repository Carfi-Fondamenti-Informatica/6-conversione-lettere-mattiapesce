#include <iostream>
#include "lib.h"
using namespace std ;
int main () {
  char word ;
  cin >> word;
  char output = carattere (word);
  if(output == '9' ) {
    cout << "errore" << endl ;
  }
  else{
    cout << output <<endl ;
  }
  return 0 ;
}
