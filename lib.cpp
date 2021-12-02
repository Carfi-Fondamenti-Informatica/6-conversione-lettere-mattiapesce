#include "lib.h"
char carattere (char a){
  bool lettera ;
  char scambio ;
  if (((65<=int(a)) and (int(a) <=90)) or ((97<=int(a)) and (int(a)<=122))){
    lettera = true;
  }
  else {
    lettera = false ;
  }
  if (lettera and ((65 <= int(a)) and (int(a) <= 90 ))) {
    scambio = int (a) +32;
  }
  else if (lettera and ((97<= int (a)) and (int (a) <= 122))) {
    scambio = int(a) -32;
  }
  else {
    scambio = '9' ;
  }
  return scambio ;
}
