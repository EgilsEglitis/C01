
#include <avr/io.h>
int main(void){
  DDRD =  0xFF; 
  // DDRD saka ka ports strādās uz izvadu  // 0xFF bināri = 256
  PORTD = 00000000; // D porta kaju vērtības, kājas skaita mo labās puses. Šeit 1. kājai piešķir 1
  while(1)
  {
//
  }
}
