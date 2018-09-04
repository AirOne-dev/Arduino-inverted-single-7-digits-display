/*                ____
 *      pin 7 ---|____|--- pin 9
 *      pin 6 ---|____|--- pin 11
 * +3.3 or 5v ---|____|---
 *      pin 4 ---|____|--- pin 10
 *      pin 3 ---|____|--- pin 8
*/

#include "numbers.h"

void setup() {
}

void loop() {
  afficher(neuf, 6);
  delay(1000);
  afficher(huit, 7);
  delay(1000);
  afficher(sept, 3);
  delay(1000);
  afficher(six, 6);
  delay(1000);
  afficher(cinq, 5);
  delay(1000);
  afficher(quatre, 4);
  delay(1000);
  afficher(trois, 5);
  delay(1000);
  afficher(deux, 5);
  delay(1000);
  afficher(un, 2);
  delay(1000);
  afficher(zero, 6);
  delay(1000);
}


