// bas : 3
// bas gauche : 4
// haut gauche : 6
// milieu : 7
// point : 8
// haut : 9
// bas droite : 10
// haut droite : 11

/*           ____
 * pin 7 ---|____|--- pin 9 (orange)
 * pin 6 ---|____|--- pin 11 (jaune)
 * +3.3v ---|____|---
 * pin 4 ---|____|--- pin 10 (vert)
 * pin 3 ---|____|--- pin 8 (bleu)
*/

//-------------------------------------------
int clear[8] = {11, 10, 9, 8, 7, 6, 4, 3};
//-------------------------------------------
int zero[6] = {3, 4, 6, 9, 10, 11};
int un[2] = {11, 10};
int deux[5] = {9, 11, 7, 4, 3};
int trois[5] = {9, 7, 3, 10, 11};
int quatre[4] = {6, 7, 11, 10};
int cinq[5] = {9, 6, 7, 10, 3};
int six[6] = {3, 4, 6, 7, 9, 10};
int sept[3] = {11, 10, 9};
int huit[7] = {3, 4, 6, 7, 9, 10, 11};
int neuf[6] = {3, 6, 7, 9, 10, 11};
int point[1] = {8};
//-------------------------------------------
int A[6] = {4, 6, 7, 9, 10, 11};
int B[7] = {3, 4, 6, 7, 9, 10, 11};
int C[4] = {9, 3, 4, 6};
int E[5] = {9, 7, 3, 4, 6};
int F[4] = {9, 7, 4, 6};
int H[5] = {4, 6, 7, 10, 11};
int I[2] = {10, 11};
int L[3] = {4, 6, 3};
int O[6] = {3, 4, 6, 9, 10, 11};
int P[5] = {4, 6, 7, 9, 11};
int S[5] = {9, 7, 3, 10, 11};
int U[5] = {3, 4, 6, 10, 11};
//-------------------------------------------
int tiret[1] = {7};

//-------------------------------------------

void afficher(int variable[], int longueur) {
  //clear
  for (int i = 0; i < 8; i++) {
    pinMode(clear[i], INPUT);
  }
  
  //affichage
  for (int i = 0; i < longueur; i++) {
    pinMode(variable[i], OUTPUT);
    digitalWrite(variable[i], LOW);
  }
}

//library by Firologame
